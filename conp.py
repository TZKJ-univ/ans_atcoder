import cv2
import numpy as np
import matplotlib.pyplot as plt
from scipy.spatial import Delaunay
from scipy.spatial.distance import euclidean

# 画像を読み込む（指定された画像パスを使用）
image_path = 'Au100nm.png'
image = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)

# 画像を平滑化（ノイズ除去）
image_blurred = cv2.GaussianBlur(image, (5, 5), 0)

# 手動での閾値設定による2値化（黒い部分を明確にする）
_, binary_image = cv2.threshold(image_blurred, 52, 255, cv2.THRESH_BINARY_INV)  # 閾値を手動で設定

# モルフォロジー処理（膨張と収縮）でノイズを減らし、輪郭を強調
kernel = np.ones((8, 8), np.uint8)
morph_image = cv2.morphologyEx(binary_image, cv2.MORPH_OPEN, kernel)

# ノイズ処理後の画像を保存
cv2.imwrite('morph_image.png', morph_image)

# ノイズ処理後の画像を表示
plt.figure(figsize=(7, 7))
plt.imshow(morph_image, cmap='gray')
plt.title('Morphology Processed Image with Manual Thresholding')
plt.axis('off')
plt.show()

# エッジを強調するため、Cannyエッジ検出を適用
edges = cv2.Canny(morph_image, 100, 200)  # Cannyの閾値を調整

# Hough変換で黒い円を検出する
circles = cv2.HoughCircles(edges, cv2.HOUGH_GRADIENT, dp=1.2, minDist=30,
                           param1=10, param2=21,  # param2を大きくして円検出を制限
                           minRadius=14, maxRadius=35)

# 円が検出されたか確認
if circles is not None:
    # 検出された円を丸めて整数に変換
    circles = np.round(circles[0, :]).astype("int")

    # 検出された円の重心（中心）をリストに格納
    centroids = [(x, y) for (x, y, r) in circles]

    print(f"検出された円の数: {len(centroids)}")

    # 各円を画像上に描画（オプション）
    output_image = cv2.cvtColor(image, cv2.COLOR_GRAY2BGR)
    for (x, y, r) in circles:
        # 円の中心を描画
        cv2.circle(output_image, (x, y), r, (0, 255, 0), 4)
        # 円の中心に小さな点を描画
        cv2.circle(output_image, (x, y), 2, (0, 128, 255), 3)

    # 検出結果を保存または表示
    cv2.imwrite('detected_circles_refined.png', output_image)
    plt.imshow(output_image)
    plt.title('Refined Detected Circles')
    plt.show()

    # Delaunay三角分割を用いて隣り合う重心の距離を算出
    points = np.array(centroids)
    tri = Delaunay(points)
    
    distances = []
    for simplex in tri.simplices:
        for i in range(3):
            p1 = points[simplex[i]]
            p2 = points[simplex[(i + 1) % 3]]
            distance = euclidean(p1, p2)
            distances.append(distance)

    # ユークリッド距離のヒストグラムを表示
    plt.figure(figsize=(8, 6))
    plt.hist(distances, bins=20, color='blue', alpha=0.7)
    plt.title('Euclidean Distance Between Neighboring Centroids')
    plt.xlabel('Distance (pixels)')
    plt.ylabel('Frequency')
    plt.grid(True)
    plt.show()

else:
    print("円が検出されませんでした。")