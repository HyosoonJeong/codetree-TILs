#include <iostream>
using namespace std;
#include <algorithm>

class Student {
    public:
    int height;
    int weight;
    int number;

    Student(int height, int weight, int number) {
        this->height=height;
        this->weight=weight;
        this->number=number;
    }
    Student(){}
};

bool cmp(const Student& a, const Student& b)  {
    if(a.height==b.height) {
        if(a.weight==b.weight) {
            return a.number<b.number;
    }
        return a.weight>b.weight;
    }
    return a.height>b.height;
}

int main() {
    int N;
    cin>>N;
    Student arr[1000];

    for(int i=0; i<N; i++) {
        int height, weight;
        cin>>height>>weight;
        Student student(height, weight, i);
        arr[i]=student;
    }

    sort(arr, arr+N, cmp);

    for(int i=0; i<N; i++) {
        cout<<arr[i].height<<" "<<arr[i].weight<<" "<<arr[i].number+1<<"\n";
    }
    
    
    return 0;
}