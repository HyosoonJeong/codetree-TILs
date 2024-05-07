#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
    int height, weight, number;
    Student(){}
    Student(int height, int weight, int number){
        this->height=height;
        this->weight=weight;
        this->number=number;
    }
};

bool cmp(const Student& a, const Student& b) {
    if(a.height==b.height)
        return a.weight>b.weight;
    return a.height<b.height;
}

int main() {
    int N;
    cin>>N;

    Student studnetArr[1000];

    for(int i=0; i<N; i++)  {
        int height, weight;
        cin>>height>>weight;
        studnetArr[i]=Student(height, weight, i+1);
    }

    sort(studnetArr,studnetArr+N, cmp);

    for(int i=0; i<N; i++) {
        cout<<studnetArr[i].height<<" "<<studnetArr[i].weight<<" "<<studnetArr[i].number<<"\n";
    }

    


    return 0;
}