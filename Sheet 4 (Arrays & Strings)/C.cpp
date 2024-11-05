#include <iostream>
using namespace std;
int main()
{
	int poscol;
	int	posrow;
	int distance;
	int x[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> x[i][j];
		}
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (x[i-1][j-1] == 1)
			{
				posrow = i;
				poscol = j;

			}
		}
	}
	distance = abs(posrow - 3) + abs(poscol - 3);
	cout << distance;
	return 0;
}
