#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    cin >> target;

    int l = 0, r = n - 1;

    while (l < r)
    {
        int sum = numbers[l] + numbers[r];
        if (sum == target)
        {
            cout << l + 1 << " " << r + 1;
            return 0;
        }
        else if (sum < target)
            l++;
        else
            r--;
    }
    return 0;
}
