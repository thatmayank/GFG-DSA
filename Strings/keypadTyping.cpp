#include <bits/stdc++.h>
using namespace std;

string printNumber(string s, int n)
{
    int match[26]{2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

    string res = "";
    for (int i = 0; i < n; i++)
    {
        res += to_string(match[s[i] - 'a']);
    }

    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << printNumber(s, s.size());
    return 0;
}