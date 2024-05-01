#include <iostream>
using namespace std;
#include <algorithm>

class Student {
    public:
    int height;
    int weight;
    int number;
    Student (int height, int weight, int number) {
        this->height=height;
        this->weight=weight;
        this->number=number;
    }
    Student () {}
};

bool cmp(Student a, Student b) {
    if(a.height!=b.height)
        return a.height>b.height;
    else if(a.height!=b.height)
        return a.weight>b.weight;
    else 
        return a.number<b.number;
}

int main() {
    int n;
    cin>>n;
    Student student = Student();
    Student arr[10];
    for(int i=0; i<n; i++) {
        cin>>arr[i].height>>arr[i].weight;
        arr[i].number=i+1;
    }
    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++) {
        cout<<arr[i].height<<" "<<arr[i].weight<<" "<<arr[i].number<<"\n";
    }

    return 0;
}