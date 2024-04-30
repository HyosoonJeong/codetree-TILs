#include <iostream>
using namespace std;

int main() {
    int n;
    double arr[6]={};
    cin>>n;
    double sum=0;
    for(int i=0; i<n; i++) {
        
        cin>>arr[i];
        sum+=arr[i];
    }
    double avg=sum/n;
    cout<<fixed;
    cout.precision(1);
    cout<<avg<<"\n";

    if(avg>=4.0) {
        cout<<"Perfect";
    }

    else if(avg>=3.0) {
        cout<<"Good";
    }
    else {
        cout<<"Poor";
    }
    

    return 0;
}