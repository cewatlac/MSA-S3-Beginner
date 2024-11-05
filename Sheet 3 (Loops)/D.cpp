#include<iostream>;
using namespace std;
int main() {
	int x = 0,n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "++X" || str == "X++") {
			x++;
		}
		else {
			x--;
		}
	}
	cout << x;
}
