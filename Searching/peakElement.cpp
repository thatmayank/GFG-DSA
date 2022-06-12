#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if ((mid == 0 || nums[mid] > nums[mid - 1]) && (nums[mid] > nums[mid + 1] || mid == n - 1))
            return mid;
        if (mid > 0 && nums[mid - 1] > nums[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> nums;
    int n{}, a{};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    cout << findPeakElement(nums);
    return 0;
}