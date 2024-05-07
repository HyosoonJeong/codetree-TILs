#include <iostream>
using namespace std;

#define MAX 100
#define DIR_NUM 4

int n, m;
int answer[MAX][MAX];

bool InRange(int x, int y) {
    return 0<=x && x<n && 0<=y && y<m;
}

int dx[DIR_NUM] = {0, 1, 0, -1};
int dy[DIR_NUM] = {1, 0, -1, 0};

int cur_x; int cur_y;
int dir;

int main() {
    cin>>n>>m;

    answer[cur_x][cur_y]=1;

    for(int i=2; i<=n*m; i++) {
        int nx=cur_x+dx[dir];
        int ny=cur_y+dy[dir];

        if(!InRange(nx, ny) || answer[nx][ny]!=0)
            dir=(dir+1)%4;
        
        cur_x=cur_x+dx[dir];
        cur_y=cur_y+dy[dir];
        answer[cur_x][cur_y]=i;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}