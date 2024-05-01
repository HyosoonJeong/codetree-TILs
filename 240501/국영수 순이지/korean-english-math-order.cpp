#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

class Person {
    public:
    string person_name;
    int person_kor;
    int person_eng;
    int person_math;

    Person (string p_name, int p_kor, int p_eng, int p_math) {
        this->person_name=p_name;
        this->person_kor=p_kor;
        this->person_eng=p_eng;
        this->person_math=p_math;
    }
    Person () {}
};

bool cmp(Person a, Person b) {
    if (a.person_kor != b.person_kor) {
        return a.person_kor > b.person_kor; 
    } else if (a.person_eng != b.person_eng) {
        return a.person_eng > b.person_eng; 
    } else {
        return a.person_math > b.person_math; 
    }
}


int main() {
    int n;
    cin>>n;
    Person pArray[10];

    for(int i=0; i<n; i++) {
        string p_name; int p_kor; int p_eng; int p_math;
        cin>>p_name>>p_kor>> p_eng>> p_math;
        Person person=Person(p_name,p_kor,p_eng,p_math);

        pArray[i]=person;
    }
    
    sort(pArray, pArray+n, cmp);
    
    for(int i=0; i<n; i++) {
        cout<<pArray[i].person_name<<" "
            <<pArray[i].person_kor<<" "
            <<pArray[i].person_eng<<" "
            <<pArray[i].person_math<<"\n";
    }

    return 0;
}