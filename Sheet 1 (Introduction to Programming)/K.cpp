#include <iostream>
using namespace std;
int main() {
    double l, p, q;
    cin >> l >> p >> q;
    double distance = (l * p) / (p + q);
    cout << distance;
    return 0;
}
