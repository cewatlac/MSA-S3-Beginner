#include <iostream>
using namespace std;
int main()
{
        int A, B;
        cin >> A >> B;
        int sum = A + B;
        int diff= A - B;
        int product = A * B;
        int max = sum;

        if (diff > max) {
            max = diff;
        }
        if (product > max) {
            max = product;
        }
        cout << max;

        return 0;
  
}
