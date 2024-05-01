#include <iostream>
using namespace std;

class Person {
    public:
    char code;
    int score;
        
    Person(char code, int score) {
        this->code=code;
        this->score=score;
    }
    Person() {}
};
int main() {
    Person pArray[5];
    Person person;
    for(int i=0; i<5; i++) {
        cin>>person.code>>person.score;
        pArray[i]=person;
    }

    int low=100;
    int check;
    for(int i=0; i<5; i++) {
        if(pArray[i].score<low) {
            low=pArray[i].score;
            check=i;
        }
    }
    cout<<pArray[check].code<<" "
        <<pArray[check].score;

    
    return 0;
}