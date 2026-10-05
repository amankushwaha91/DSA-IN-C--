#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    if (l > r)
        return -1;
    int m = l + (r - l) / 2;
    if (a[m] == x)
        return m;
    if (a[m] > x)
        return binarySearch(a, l, m - 1, x);
    return binarySearch(a, m + 1, r, x);
}

int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    int res = binarySearch(a, 0, n - 1, x);
    if (res == -1)
        cout << "Not Found";
    else
        cout << "Found at index " << res;
    return 0;
}
