#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    int arr[2][4];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            int tmp;
            cin>>tmp;

            arr[i][j]=tmp;
        }
    }
    // 가로평균
    for(int i=0; i<2; i++)
    {
        int sum=0;

        for(int j=0; j<4; j++)
        {
            sum+=arr[i][j];
        }
        cout<<fixed<<setprecision(1)<<sum/4.0<<" ";

    }
    cout<<"\n";

    // 세로평균

    for(int j=0; j<4; j++)
    {
        int sum=0;
        for(int i=0; i<2; i++)
        {
            sum+=arr[i][j];
        }
        cout<<sum/2.0<<" ";
    }
    cout<<"\n";

    // 전체평균
    int sum=0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<sum/8.0;
    return 0;
}