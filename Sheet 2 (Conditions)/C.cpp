#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A > 0 && B == 0) {
        cout << "Gold" ;
    }
     if (A == 0 && B > 0) {
        cout << "Silver" ;
    }
     if (A > 0 && B > 0) {
        cout << "Alloy" ;
    }
    return 0;
}
