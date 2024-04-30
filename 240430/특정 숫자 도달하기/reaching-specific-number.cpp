#include <iostream>
using namespace std;

int main() {
    int arr[10]={};
    int cnt;
    for(int i=0; i<10; i++) {
        cin>>arr[i];
        cnt=i;
        if(arr[i]>250)
            break;
    }
    int sum=0;
    for(int i=0; i<cnt; i++) {
        sum+=arr[i];
    }
    double avg=(double)sum/cnt;
    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<avg;
    
    return 0;
}