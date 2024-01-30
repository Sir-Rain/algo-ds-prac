#include<iostream>
#include<vector>
#include<algorithm>

int a[104][104], visited[104][104], m, n, k, x1, x2, y1, y2;
const int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};

std::vector<int> ret;

int dfs(int y, int x){
    visited[y][x] = 1;
    int ret = 1;

    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx] == 1) continue;
        if(a[ny][nx] == 1) continue;
        ret += dfs(ny, nx);
    }
    return ret;
}

int main(){
    std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

    std::cin >> m >> n >> k;

    for(int i=0; i<k; i++){
        std::cin >> x1 >> x2 >> y1 >> y2;

        for(int x=x1; x<x2; x++){
            for(int y=y1; y<y2; y++){
                a[y][x] = 1;
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] != 1 & visited[i][j] == 0){
                    ret.push_back(dfs(i, j));
                }
            }
        }
    }
    std::sort(ret.begin(), ret.end());
    std::cout << ret.size() << "\n";
    for(int i: ret) std::cout << i << " ";
    return 0;
}

