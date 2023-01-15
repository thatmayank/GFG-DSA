#include <bits/stdc++.h>
using namespace std;

bool areIsomorphic(string str1, string str2)
{

    if (str1.size() != str2.size())
        return false;

    char match[256];
    memset(match, ' ', sizeof(match));

    for (int i = 0; i < str1.size(); i++)
    {
        if (match[str1[i]] == ' ')
            match[str1[i]] = str2[i];
        else
        {
            if (match[str1[i]] != str2[i])
                return false;
        }
    }
    return true;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << boolalpha << areIsomorphic(a, b);
    return 0;
}