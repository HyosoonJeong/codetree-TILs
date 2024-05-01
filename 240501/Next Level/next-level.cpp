#include <iostream>
using namespace std;
#include <string>

class MyP {
    public:
    string ID;
    int level;

    MyP(string ID="codetree", int level=10) {
        this->ID=ID;
        this->level=level;
    }
};

int main() {
    MyP original = MyP();
    cout<<"user "<<original.ID<<" ";
    cout<<"lv "<<original.level<<"\n";
    
    string id;
    int level;
    cin>>id>>level;
    MyP change = MyP(id, level);
    cout<<"user "<<change.ID<<" ";
    cout<<"lv "<<change.level;
    return 0;
}