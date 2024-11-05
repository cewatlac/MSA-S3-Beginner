#include <iostream>
using namespace std;

int main() {
    int v, a, b, d;
    cin >> v >> a >> b >> d;
    
    float t = (float) d/v;
    
    if (t <= max(a, b) && t >= min(a, b)) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    
    return 0;
}
