// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/#
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long sum)
    {
        unsigned long long curr_sum = arr[0], k = 0;
        vector<int> res;

        for (int i = 1; i < n || k < i;)
        {
            if (curr_sum < sum)
            {
                curr_sum += arr[i];
                i++;
            }
            else if (curr_sum > sum)
            {
                curr_sum -= arr[k];
                k++;
            }
            else
            {
                res.push_back(k + 1);
                res.push_back(i);
                return res;
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int arr[n];
    const int mx = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    vector<int> res;
    res = ob.subarraySum(arr, n, s);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
} // } Driver Code Ends