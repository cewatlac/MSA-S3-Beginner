// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int t , c = 0;
   cin >>t;
   while (t--){
       int a , b;
       cin >> a  >> b;
       if (a+2 <= b)c++;
   }
   cout << c;
    return 0;
}
