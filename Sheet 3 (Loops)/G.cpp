# include <iostream>
# include<vector>
using namespace std;
int  main()
{
	int i;
	int a, b;
	int ct = 0;
	int n,k;
	cin >> n >> k;
	for (i = 0;i<k;i++)
	{
		if (n % 10 == 0)
		{
			n = n / 10;
		}
		else {
			n = n - 1;
		}
	}
	cout << n;
	return 0;
}
