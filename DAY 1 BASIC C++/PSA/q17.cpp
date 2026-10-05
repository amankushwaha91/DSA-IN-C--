#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, r = n - 1;
    while (l < r)
    {
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
        l++;
        r--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
