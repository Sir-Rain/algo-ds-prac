#include <iostream>
#include <algorithm>

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0 , -1};
int m, n, k, y, x, ret, ny, nx, t;
int a[51][51];
bool visited[51][51];
void dfs(int y, int x){
    visited[y][x] = 1;

    for(int i=0; i<4; i++){
        ny = y + dy[i];
        nx = x + dx[i];

        if(ny<0 || nx < 0 || ny>=n || nx>=m) continue;
        if(a[ny][nx] == 1 && !visited[ny][nx]){
            dfs(ny, nx);
        }
    }
    return;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::cin >> t;

    while(t--){
        std::fill(&a[0][0], &a[0][0] + 51 * 51, 0);
        std::fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
        ret = 0;

        std::cin >> m >> n >> k;

        for(int i=0; i<k; i++){
            std::cin >> x >> y;
            a[y][x] = 1;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == 1 && !visited[i][j]){
                    dfs(i, j);
                    ret++;
                }
            }
        }

        std::cout << ret << "\n";
    }
    return 0;
}