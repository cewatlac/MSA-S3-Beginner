#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int L[] = { 4, 7, 47, 74, 447, 477, 744, 747, 774, 777 };

    for (int i = 0; i < 10; i++)
    {
        if (n % L[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
