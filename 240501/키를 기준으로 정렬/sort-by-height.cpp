#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

class Person {
    public:
    string person_name;
    int person_height;
    int person_weight;

    Person (string p_name, int p_height, int p_weight) {
        this->person_name=p_name;
        this->person_height=p_height;
        this->person_weight=p_weight;
    }
    Person () {}
};

bool cmp(Person a, Person b) {
    return a.person_height<b.person_height;
}

int main() {
    int n;
    cin>>n;
    Person pArray[10];

    for(int i=0; i<n; i++) {
        string p_name; int p_height; int p_weight;
        cin>>p_name>>p_height>>p_weight;
        Person person=Person(p_name, p_height, p_weight);

        pArray[i]=person;
    }
    
    sort(pArray, pArray+n, cmp);
    
    for(int i=0; i<n; i++) {
        cout<<pArray[i].person_name<<" "
            <<pArray[i].person_height<<" "
            <<pArray[i].person_weight<<"\n";
    }

    return 0;
}