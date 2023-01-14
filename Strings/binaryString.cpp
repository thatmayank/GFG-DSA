#include <bits/stdc++.h>
using namespace std;

long binarySubstring(int n, string a)
{

    int count = 0; // number of 1's in string
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
            count++;
    }

    // formula to find total number of pairs of two digits among the string

    long res = (count * (count - 1)) / 2;
    return res;
}

int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;
    long res = binarySubstring(n, str);
    cout << res;
    return 0;
}