#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cin >> n;
    int ct1 = 0;
    int ct2 = 0;
    int ct3 = 0;
    int ct4 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == 1)
        {
            ct1++;
        }
        if (s == 2)
        {
            ct2++;
        }
        if (s == 3)
        {
            ct3++;
        }
        if (s == 4)
        {
            ct4++;
        }
    }
    int total = ct4;//number of cars
    while (ct1 != 0 && ct3 != 0)
    {
        ct3--;
        ct1--;
        total++;
    }
    if (ct1 == 0 && ct3 != 0)
    {
        total += ct3;
    }
    total += ct2 / 2;
    if (ct2 % 2 != 0)
    {
        if (ct1 <= 2)
        {
            ct1 = 0;
            ct2 = 0;
        }
        else
        {
            ct1 = ct1 - 2;
            ct2 = 0;
        }
        total++;
    }
    if (ct1 != 0)
    {
        total = total + ct1 / 4;
        if (ct1 % 4 != 0)
        {
            total++;
        }
    }
    cout << total;
    return 0;

      
}
