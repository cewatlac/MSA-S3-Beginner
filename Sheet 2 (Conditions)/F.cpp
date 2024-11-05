#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int R = N / 100;    
    int L = N % 10;          
    if (R== L)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
