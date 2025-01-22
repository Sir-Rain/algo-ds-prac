#include <iostream>
#include <algorithm>

int a[101][101], e[101][101], visited[101][101], n, temp, ret = 1;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0 ,-1};

void dfs(int y, int x, int d){
    visited[y][x] = 1;

    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny>= n || nx >= n) continue;
        if(!visited[ny][nx] && a[ny][nx] > d) dfs(ny, nx, d);
    }
    return;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cin >> a[i][j];
        }
    }

    for(int d=1; d<101; d++){
        std::fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] > d && !visited[i][j]){
                    dfs(i, j, d);
                    cnt++;
                }
            }
        }
        ret = std::max(ret, cnt);
    }

    std::cout << ret << '\n';

    return 0;
}
