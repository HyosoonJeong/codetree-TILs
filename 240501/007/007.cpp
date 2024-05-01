#include <iostream>
#include <string>
using namespace std;

class OO7 {
    public : 
    string code;
    char location;
    int time;

    OO7(string code, char location, int time) {
        this->code=code;
        this->location=location;
        this->time=time;
    }
};

int main() {
    string c;
    char l;
    int t;
    cin>>c>>l>>t;

    OO7 oo7=OO7(c, l, t);
    cout<<"secret code : "<<oo7.code<<"\n";
    cout<<"meeting point : "<<oo7.location<<"\n";
    cout<<"time : "<<oo7.time<<"\n";
    return 0;
}