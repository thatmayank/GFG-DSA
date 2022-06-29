#include <bits/stdc++.h>
using namespace std;

int longestSpan(int a[], int b[], int n)
{
    int da[n]{};
    for (int i = 0; i < n; i++)
        da[i] = a[i] - b[i];

    int prefixSum{}, sz{};
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        prefixSum += da[i];

        if (prefixSum == 0)
            sz = i + 1;
        if (m.find(prefixSum) != m.end())
            sz = max(sz, i - m[prefixSum]);
        if (m.find(prefixSum) == m.end())
            m[prefixSum] = i;
    }
    return sz;
}

int main()
{
    int n{};
    cin >> n;
    int a[n]{}, b[n]{};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cout << longestSpan(a, b, n);
    return 0;
}