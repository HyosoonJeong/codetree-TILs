#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    int arr[100][100];
    int cnt=1;

    for(int i=0; i<n+m-1; i++)
    {

        for(int j=0; j<n;j++)
        {
            for(int k=0; k<m;k++)
            {
                if(i==j+k)
                arr[j][k]=cnt++;
            }
        }
    }


    // 출력
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}