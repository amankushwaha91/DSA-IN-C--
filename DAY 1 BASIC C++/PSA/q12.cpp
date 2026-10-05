#include <iostream>
#include <vector>
using namespace std;

int maximumCount(vector<int>& nums)
{
    int n = nums.size();
    int l = 0, r = n - 1, firstPos = n, lastNeg = -1;

    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] > 0)
        {
            firstPos = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }

    l = 0; r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] < 0)
        {
            lastNeg = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }

    int pos = n - firstPos;
    int neg = lastNeg + 1;
    return max(pos, neg);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << maximumCount(nums);
    return 0;
}
