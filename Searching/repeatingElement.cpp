#include <bits/stdc++.h>
using namespace std;

int repeatingElement(vector<int> &nums)
{
    int slow = nums[0] + 1, fast = nums[0] + 1;
    do
    {
        slow = nums[slow] + 1;
        fast = nums[nums[fast] + 1] + 1;
    } while (slow != fast);
    slow = nums[0] + 1;
    while (slow != fast)
    {
        slow = nums[slow] + 1;
        fast = nums[fast] + 1;
    }
    return slow - 1;
}

int main()
{
    int n{};
    cin >> n;
    int x{};
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cout << repeatingElement(nums);
    return 0;
}