#include <iostream>
using namespace std;

int main()
{
    int arr[10]={};
    int cnt;

    for(int i=0; i<10;i++)
    {
        int tmp;
        cin>>tmp;
        if(tmp>=250)
            break;
        arr[i]=tmp;
        cnt=i;
    }

    int sum=0;
    for(int i=0; i<10; i++) {
        sum+=arr[i];
    }

    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    // 우선순위 괄호 , 인덱스 0번부터 시작
    cout<<(double)sum/(cnt+1);

    return 0;
}