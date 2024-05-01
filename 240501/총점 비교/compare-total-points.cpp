#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
    string name;
    int score1;
    int score2;
    int score3;

    Student(string name, int score1, int score2, int score3) {
        this->name=name;
        this->score1=score1;
        this->score2=score2;
        this->score3=score3;
    }
    Student(){}
};

bool cmp(Student a, Student b) {
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}
int main() {
    int n;
    cin>>n;
    Student student=Student();
    Student arr[10];

    for(int i=0; i<n; i++) {
        string name; int sco1; int sco2; int sco3;
        cin>>name>>sco1>>sco2>>sco3;

        arr[i] = Student(name, sco1, sco2, sco3);
    }
    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++) {
        cout<<arr[i].name<<" "<<arr[i].score1<<" "<<arr[i].score2<<" "<<arr[i].score3<<"\n";
    }
    
    return 0;
}