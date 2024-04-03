#include <iostream>
using namespace std;

int main() {

    int arr[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            int tmp;
            cin>>tmp;
            arr[i][j]=tmp;
        }
    }
    
    int sum=0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(j<=i)
            {
                sum+=arr[i][j];
            }
            
        }
    }

    cout<<sum;


    return 0;
}