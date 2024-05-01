#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>str[i]; 
   }
   sort(str, str+n);
   for(int i=0; i<n; i++) {
    cout<<str[i]<<"\n";
   }
    return 0;
}