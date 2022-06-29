// 4. Check if two strings are anagram of each other or not

#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string &str1, string &str2)
{
    if (str1.length() != str2.length())
        return false;

    int count[256]{};

    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout << boolalpha << checkAnagram(str1, str2);
    return 0;
}