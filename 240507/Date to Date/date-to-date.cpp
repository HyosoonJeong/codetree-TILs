#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin>>m1>>d1>>m2>>d2;

    int elapse_days=0;

    int days[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(1) {
        if(m1==m2 && d1==d2)
            break;

        elapse_days++;
        d1++;
        
        if(d1>days[m1]) {
            m1++;
            d1=1;
        }
    }
    cout<<elapse_days+1;

    return 0;
}