#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
            // E, S,  W, N
    int dx[4]={1, 0, -1, 0};
    int dy[4]={0, -1, 0, 1};

    int x=0; int y=0;

    while(N--) {
        char dir;
        int n;
        cin>>dir>>n;

        if(dir=='E') {
            x += (n*dx[0]);
        }
        else if(dir=='S') {
            y += (n*dy[1]);
        }
        else if(dir=='W') {
            x += (n*dx[2]);
        }
        if(dir=='N') {
            y += (n*dy[3]);
        }
    }
    cout<<x<<" "<<y; 

    return 0;
}