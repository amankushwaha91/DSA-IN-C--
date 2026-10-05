#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;

    cout << "Enter a 3-digit number: ";
    cin >> n;

    temp = n;

    while (temp > 0) {
        digit = temp % 10;          // extract last digit
        sum += digit * digit * digit; // cube of digit
        temp = temp / 10;           // remove last digit
    }

    if (sum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}