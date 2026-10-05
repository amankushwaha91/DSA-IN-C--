#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int power = 1;

    while (power * 2 <= num) {
        power *= 2;
    }

    cout << power;

    return 0;
}