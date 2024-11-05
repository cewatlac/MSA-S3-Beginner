#include <iostream>
using namespace std;
int main()
{
	long long ct = 0;
	long long M;
		cin >> M;
		ct += M / 100;
		M = M % 100;
		ct += M / 20;
		M = M % 20;
		ct += M / 10;
		M = M % 10;
		ct += M / 5;
		M = M % 5;
		ct += M / 1;
		M = M % 1;
		cout << ct;
		
}
