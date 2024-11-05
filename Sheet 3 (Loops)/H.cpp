#include <iostream>
using namespace std;
int main() {
	int co = 0;
	for (int loop = 0; loop < 5; loop++) {
		int row1, row2, row3, row4, row5;
		cin >> row1 >> row2 >> row3 >> row4 >> row5;
		if (loop == 0) {


			if (row2 == 1 || row4 == 1) {
				co += 3;
			}
			if (row1 == 1 || row5 == 1) {
				co += 4;
			}
			if (row3 == 1) {
				co += 2;
			}
		}
		if (loop == 1) {
			if (row2 == 1 || row4 == 1) {
				co += 2;
			}
			if (row1 == 1 || row5 == 1) {
				co += 3;
			}
			if (row3 == 1) {
				co += 1;
			}
		}
		if (loop == 2) {
			if (row2 == 1 || row4 == 1) {
				co += 1;
			}
			if (row1 == 1 || row5 == 1) {
				co += 2;
			}
			if (row3 == 1) {
				co += 0;
			}
		}
		if (loop == 3) {
			if (row2 == 1 || row4 == 1) {
				co += 2;
			}
			if (row1 == 1 || row5 == 1) {
				co += 3;
			}
			if (row3 == 1) {
				co += 1;
			}
		}
		if (loop == 4) {
			if (loop == 4 && row2 == 1 || row4 == 1) {
				co += 3;
			}
			if (loop == 4 && row1 == 1 || row5 == 1) {
				co += 4;
			}
			if (loop == 4 && row3 == 1) {
				co += 2;
			}
		}
	}
	cout << co;
	return 0;
}
