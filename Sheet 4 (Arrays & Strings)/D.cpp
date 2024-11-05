#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

void getInput(int *prices, int size) {
    for (int i = 0; i < size; i++) {
        cin >> prices[i];
    }
}

int sumOfBadDays(int *count, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += count[i];
    }
    return sum;
}

void findBadDays(int *prices, int size, int *count) {
    int minPriceSoFar = INT_MAX; 

    for (int i = size - 1; i >= 0; i--) {
        if (prices[i] > minPriceSoFar) {
            count[i] = 1; 
        } else {
            count[i] = 0; 
        }
        minPriceSoFar = min(minPriceSoFar, prices[i]); 
    }
}

int main() {
    int TestCases, size;
    cin >> TestCases;
    for (int i = 0; i < TestCases; i++) {
        cin >> size;
        int* count = new int[size]; 
        int* prices = new int[size]; 

        getInput(prices, size);
        findBadDays(prices, size, count);
        cout << sumOfBadDays(count, size) << endl;

   
        delete[] count;
        delete[] prices;
    }
    return 0;
}
