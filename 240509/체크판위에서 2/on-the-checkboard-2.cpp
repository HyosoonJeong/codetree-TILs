#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin>>R>>C;
    char arr[15][15];

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            cin>>arr[i][j];
        }
    }

    int cnt=0;

    for(int i=1; i<R; i++) {
        for(int j=1; j<C; j++) {
            for(int k=i+1; k<R-1; k++) {
                for(int l=j+1; l<C-1; l++) {
                    if(arr[0][0]!=arr[i][j] && arr[i][j]!=arr[k][l] && arr[k][l]!=arr[R-1][C-1])
                        cnt++;
                }
            }
        }
    }

    cout<<cnt;
    return 0;
}