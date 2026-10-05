#include <iostream>
using namespace std;

int main() {
    int n, arr[100], sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        int num = arr[i], rev = 0, temp = num;
        while(num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        if(temp == rev)
            sum += temp;
    }

    cout << sum;
    return 0;
}