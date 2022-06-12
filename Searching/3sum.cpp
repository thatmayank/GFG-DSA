#include <bits/stdc++.h>
using namespace std;

vector<int> threeSum(vector<int> &nums, int target)
{
    vector<int> res;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int left = i + 1, right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == target)
            {
                res.push_back(i + 1);
                res.push_back(left + 1);
                res.push_back(right + 1);
                return res;
            }
            else if (sum > target)
                right--;
            else
                left++;
        }
    }
    res.push_back(-1);
    return res;
}

int main()
{
    int n{}, x{};
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cin >> x;
    vector<int> res;
    res = threeSum(nums, x);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}