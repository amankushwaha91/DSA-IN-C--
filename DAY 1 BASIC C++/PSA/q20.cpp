#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int height[n];
    for (int i = 0; i < n; i++)
        cin >> height[i];

    int l = 0, r = n - 1;
    int maxArea = 0;

    while (l < r)
    {
        int h = height[l] < height[r] ? height[l] : height[r];
        int area = h * (r - l);
        if (area > maxArea)
            maxArea = area;

        if (height[l] < height[r])
            l++;
        else
            r--;
    }

    cout << maxArea;
    return 0;
}
