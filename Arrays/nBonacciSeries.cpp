#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nbonacci(int n, int m)
    {
        int arr[m]{};

        arr[n - 1] = 1;
        arr[n] = 1;

        // n = 3 , m = 9
        // 0 0 1 1 2 4 7 13 24
        // 0 1 2 3 4 5 6 7  8
        for (int i = n + 1; i < m; i++)
            arr[i] = 2 * arr[i - 1] - arr[i - n - 1];

        vector<int> res(arr, arr + m);
        return res;
    }
};

int main()
{
    int n{}, m{};
    cin >> n >> m;
    vector<int> res;
    Solution ob;
    res = ob.nbonacci(n, m);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}