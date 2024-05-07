#include <iostream>
#include <string>
using namespace std;
// 방향을 나타내는 변수 생성필요!!
#define DIR_NUM 4

int main() {
    /*
    int N;
    cin>>N;
    이거 필요없음
    */
           // 동, 남, 서, 북
    int dx[4]={1, 0, -1, 0};
    int dy[4]={0, -1, 0, 1};
    int x=0; int y=0;
    int cur_dir = 3; // 현재 북쪽을 바라보고 있음

    string dir;
    cin>>dir;

    for(int i=0; i<(int)dir.size(); i++) {
        char c_dir=dir[i];
    
        if(c_dir=='L')
            cur_dir=(cur_dir+3)%4;
        else if(c_dir=='R')
            cur_dir=(cur_dir+1)%4;
        else {  // c_dir=='F'
            x += dx[cur_dir];
            y += dy[cur_dir];
        }
    }
    cout<<x<<" "<<y;

    return 0;
}