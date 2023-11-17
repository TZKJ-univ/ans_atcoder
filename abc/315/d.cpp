/**
  *  programmer:  Zama
*    created: 19.08.2023 21:34:42
**/

#include <bits/stdc++.h>

using namespace std;

const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> graph(H);

    for(auto& g : graph) cin >> g;

    vector<vector<bool>> seen(H, vector<bool>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (seen[i][j]) continue;
            seen[i][j] = true;
            char target = graph[i][j];

            bool ok = 0;
            for (int k = 0; k < H; k++) {
                if (seen[k][j]) continue;
                if (graph[k][j] == target) seen[k][j];
            }
            for (int dir = 0; dir < 4; ++dir) {
                int i2 = i + dx[dir];
                int j2 = j + dy[dir];
                if (i2 < 0 || i2 >= H || j2 < 0 || j2 >= W) continue;
                if (graph[i][j] == graph[i2][j2]) ok = 1;
            }
            if (!ok) continue;
            while (!que.empty()) {
                auto [x, y] = que.front();
                que.pop();
                for (int dir = 0; dir < 4; ++dir) {
                    int x2 = x + dx[dir];
                    int y2 = y + dy[dir];

                    if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W) continue;
                    if (seen[x2][y2]) continue;
                    if (graph[x2][y2] != target) continue;
                    
                    que.push({x2, y2});
                    seen[x2][y2] = true;
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (!seen[i][j]) {
                count++;
            cout << graph[i][j] << endl;}
        }
    }

    cout << count << endl;

    return 0;
}