#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    while(n--) {
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    for(int i=0; i<arr.size(); i++) {
        arr[i]*=arr[i];
    }
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}