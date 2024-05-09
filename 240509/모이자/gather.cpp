#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[100];
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int min_distance=INT_MAX;

    for(int i=0; i<n; i++) {
        int distance=0;
        for(int j=0; j<n; j++) {
            distance += abs(j-i)*arr[j]; 
        }
        if(distance < min_distance)
            min_distance=distance;
    }

    cout<<min_distance;
    
    return 0;
}