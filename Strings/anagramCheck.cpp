// 4. Check if two strings are anagram of each other or not

#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string &str1, string &str2)
{
    if (str1.length() != str2.length())
        return false;

    int count1[126]{}, count2[126]{};

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != ' ')
            count1[str1[i]]++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] != ' ')
            count2[str2[i]]++;
    }

    for (int i = 0; i < 126; i++)
    {
        if (count1[i] > 0)
        {
            if (count1[i] != count2[i])
                return false;
        }
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