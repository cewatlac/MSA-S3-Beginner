#include<iostream>
using namespace std;
int main()
{
	int* x;
	int n;
	int i;
	cin >> n;
	int* y;
	x = new int [n-1];
	for (i = 0;i < n - 1;i++)
	{
		cin >> x[i];
	}
	int a, b;
	cin >> a >> b;
	int tot = 0;
	for (i = a;i < b;i++)
	{
		tot = tot + x[i-1];
	}
	cout << tot;
	return 0;
}
