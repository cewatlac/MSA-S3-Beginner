#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a; 
    long long length = (n + a - 1) / a;
    long long width = (m + a - 1) / a;
    long long total = length * width;
    cout << total << endl; 
    return 0;
}