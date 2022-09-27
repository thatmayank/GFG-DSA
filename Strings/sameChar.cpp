#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "statesmans";

    unordered_map<char, int> mp;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}