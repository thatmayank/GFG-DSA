// 1. Print frequencies of character (in sorted order) in a string of lower case alphabets.

#include <bits/stdc++.h>
using namespace std;

void freqCharacters(string str)
{
    int count[26]{};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
            count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
            cout << (char)(i + 'a') << " " << count[i] << endl;
    }
}

int main()
{
    string str;
    getline(cin, str);
    freqCharacters(str);
    return 0;
}