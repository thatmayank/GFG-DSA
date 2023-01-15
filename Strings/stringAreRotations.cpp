// Check if strings are rotations of each other or not

#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;

    string tmp = s1 + s1;
    // find substring in another string
    if (tmp.find(s2) != string::npos)
        return true;
    return false;
}

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    cout << boolalpha << areRotations(a, b);
    return 0;
}