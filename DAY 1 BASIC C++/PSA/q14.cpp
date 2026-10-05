#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int first = -1, second = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            if (arr[i] != first)
            {
                second = first;
                first = arr[i];
            }
        }
        else if (arr[i] < first && arr[i] > second)
            second = arr[i];
    }
    return second;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << secondLargest(arr, n);
    return 0;
}
