import numpy as np
from collections import deque

def min_operations_to_rearrange(string, target):
    if len(string) != len(target):
        return -1  # 異なる長さの文字列は並べ替えできない

    # 初期状態
    queue = deque([(string, 0)])  # (現在の文字列, 操作回数)
    visited = set([string])  # 訪問済み状態を記録

    while queue:
        current, steps = queue.popleft()

        # 目標の文字列に達した場合
        if current == target:
            return steps

        # 2文字を選んで待避場所に移し、新しい状態を生成
        for i in range(len(current)):
            for j in range(i + 1, len(current)):
                new_state = current[:i] + current[i+1:j] + current[j+1:]
                for k in range(len(new_state) + 1):
                    new_string = new_state[:k] + current[i] + current[j] + new_state[k:]
                    if new_string not in visited:
                        visited.add(new_string)
                        queue.append((new_string, steps + 1))

    return -1  # 目標の並びにできない場合

# 例
N = int(input())
string = input()
target = input()
print(min_operations_to_rearrange(string, target))  # 出力: 最短の操作回数