// 4. Check if two strings are anagram of each other or not

#include <bits/stdc++.h>
using namespace std;

// bool checkAnagram(string &str1, string &str2)
// {
//     if (str1.length() != str2.length())
//         return false;

//     int count[256]{};

//     for (int i = 0; i < str1.length(); i++)
//     {
//         count[str1[i]]++;
//         count[str2[i]]--;
//     }

//     for (int i = 0; i < 256; i++)
//     {
//         if (count[i] != 0)
//             return false;
//     }

//     return true;
// }

bool checkAnagram(string a, string b)
{

    if (a.size() != b.size())
        return false;

    map<char, int> mp;
    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }
    for (int j = 0; j < b.size(); j++)
    {
        mp[b[j]]--;
    }

    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second != 0) return false;
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