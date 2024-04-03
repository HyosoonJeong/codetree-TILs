#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int t;
			cin >> t;
			arr[i].push_back(t);
		}
	}
	vector<vector<int>> brr(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int t;
			cin >> t;
			brr[i].push_back(t);
		}
	}
	vector<vector<int>> crr(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == brr[i][j])
				crr[i].push_back(0);
			else
				crr[i].push_back(1);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << crr[i][j]<<" ";
		}
		cout << "\n";
	}

	return 0;
}