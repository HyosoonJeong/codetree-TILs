#include <iostream>
using namespace std;
#include <string>

class Bomb {
    public:
    string code;
    char color;
    int second;

    Bomb (string code, char color, int second) {
        this->code=code;
        this->color=color;
        this->second=second;
    }
};
int main() {
    string code; char color; int sec;
    cin>>code>>color>>sec;

    Bomb bomb(code, color, sec);
    cout<<"code : "<<bomb.code<<"\n";
    cout<<"color : "<<bomb.color<<"\n";
    cout<<"second : "<<bomb.second<<"\n";
    

    return 0;
}