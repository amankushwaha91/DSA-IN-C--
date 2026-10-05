#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    long long sum = 0, sumsq = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        sumsq += (long long)arr[i] * arr[i];
    }

    int N = n + 2;
    long long totalSum = (long long)N * (N + 1) / 2;
    long long totalSqSum = (long long)N * (N + 1) * (2 * N + 1) / 6;

    long long S = totalSum - sum;
    long long Sq = totalSqSum - sumsq;

    long long x = (S + Sq / S) / 2;
    long long y = S - x;

    cout << x << " " << y;
    return 0;
}
