#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[100];
    int B[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>A[i];
    }
    for(int i=0; i<n; i++) {
        cin>>B[i];
    }
    sort(A, A+n);
    sort(B, B+n);

    bool flag=true;
    for(int i=0; i<n; i++) {
        if(A[i]!=B[i]){
            flag=false;
            break;}
    }
    if(flag)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}