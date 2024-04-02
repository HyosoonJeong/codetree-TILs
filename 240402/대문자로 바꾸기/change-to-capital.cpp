#include <iostream>
using namespace std;

int main() {
    int arr[5][3];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            char character;
            cin>> character;
            arr[i][j]=character;
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<static_cast<char>(arr[i][j]-32)<<" ";
        }
        cout<<"\n";
    }


    return 0;
}