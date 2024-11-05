#include <iostream>
using namespace std;
int main()
{
	long long  cubes;
	cin >> cubes;
	long long n = 0;
	int equation = 0;
	while (equation <= cubes)
	{
		n++;
		cubes -= equation;
		equation = n * (n + 1) / 2;
	}
	cout << n-1 ;
}
