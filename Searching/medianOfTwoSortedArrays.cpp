#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> nums1, vector<int> nums2)
{
    int n1 = nums1.size(), n2 = nums2.size();
    if (n1 > n2)
        return findMedianSortedArrays(nums2, nums1);

    int begin = 0, end = n1;
    while (begin <= end)
    {
        int mid1 = begin + (end - begin) / 2;
        int mid2 = (n1 + n2 + 1) / 2 - mid1;

        int mx1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1]; //         mx1  mn1
        int mx2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1]; //         mx2  mn2
        int mn1 = (mid1 == n1) ? INT_MAX : nums1[mid1];
        int mn2 = (mid2 == n2) ? INT_MAX : nums2[mid2];

        if (mx1 <= mn2 && mx2 <= mn1)
        {
            if ((n1 + n2) % 2 == 0)
                return (double)(max(mx1, mx2) + min(mn1, mn2)) / 2;
            else
                return (double)max(mx1, mx2);
        }

        else if (mx1 > mn2)
        {
            end = mid1 - 1;
        }

        else // mn1 < mx2
            begin = mid1 + 1;
    }
    return -1;
}

int main()
{
    int n1{},n2{};
    cin >> n1;
    vector<int> nums1;
    vector<int> nums2;
    int x{};
    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        nums1.push_back(x);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        nums2.push_back(x);
    }
    cout << findMedianSortedArrays(nums1, nums2);
    return 0;
}