#include <iostream>
using namespace std;
int main()
{
    int K, X;
    cin >> K >> X; 
    int total = K * 500; 
    if (total >= X) 
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
