#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    int arr[10][10];

    // 입력
    for (int j = n-1; j >= 0; j--)
    {
        if (j % 2 == 0)
        {
            for (int i = n-1; i >= 0; i--)
            {
                arr[n-(n-i)][j] = ++cnt;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                arr[i][j] = ++cnt;
            }
        }
    }

    // 출력
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }


    return 0;
}