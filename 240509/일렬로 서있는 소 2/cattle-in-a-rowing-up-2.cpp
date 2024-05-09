#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    
    int cows[100]={-1};
    for(int i=0; i<N; i++) {
        cin>>cows[i];
    }

    int count=0;

    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            for(int k=j+1; k<N; k++) {
                if(cows[i]<=cows[j] && cows[j]<=cows[k])
                    count++;
            }
        }
    }
    cout<<count;
    return 0;
}