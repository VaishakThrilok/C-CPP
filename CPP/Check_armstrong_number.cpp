#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, rem, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    // count digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // calculate sum of powers
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    if (sum == original) {
        cout << original << " is an Armstrong number" << endl;
    } else {
        cout << original << " is NOT an Armstrong number" << endl;
    }

    return 0;
}
