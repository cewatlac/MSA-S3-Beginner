#include <iostream>
using namespace std;
int main()
{

        int A, B, C;
        cin >> A >> B >> C;
        while (true) {
            if (C == 0) {
                if (A > 0) {
                    A--;
                }
                else {
                    cout << "Aoki" << endl;
                    break;
                }
                C = 1; 
            }
            else {
                if (B > 0) {
                    B--;
                }
                else {
                    cout << "Takahashi" << endl;
                    break;
                }
                C = 0; 
            }
        }

        return 0;
    

}
