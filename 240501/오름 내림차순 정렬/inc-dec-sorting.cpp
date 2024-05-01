#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int arr[101]={-1};
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}