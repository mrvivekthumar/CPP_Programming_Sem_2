// "Trapping Rain Water" problem.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int p;
	cin >> p; // Number of test cases

	while (p--)
	{
		int n, res = 0;
		cin >> n;
		vector<int> a(n);

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (int i = 1; i < n - 1; i++)
		{
			int lmax = a[i];
			for (int j = 0; j < i; j++)
			{
				lmax = max(lmax, a[j]);
			}

			int rmax = a[i];
			for (int j = i + 1; j < n; j++)
			{
				rmax = max(rmax, a[j]);
			}

			res += max(0, min(lmax, rmax) - a[i]); // Avoid negative water
		}

		cout << res << endl;
	}

	return 0;
}
