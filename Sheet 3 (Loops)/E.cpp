#include <iostream>
using namespace std;

int main() {
    int n;
    int ct = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;
        
        int total = Petya + Vasya + Tonya;
        
        if (total >= 2) {
            ct++;
        }
    }

    cout << ct;
}
