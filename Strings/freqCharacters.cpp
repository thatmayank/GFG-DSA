// 1. Print frequencies of character (in sorted order) in a string of lower case alphabets.

#include <bits/stdc++.h>
using namespace std;

string freqCharacters(string str)
{
    int count[26]{};
    string res;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
            count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0) {
            // cout << (char)(i + 'a') << " " << count[i] << endl;
            res += (char)(i + 'a');
            res += to_string(count[i]);
            res += ' ';
        }
    }
    return res;
}

int main()
{
    string str;
    getline(cin, str);
    cout<<freqCharacters(str);
    return 0;
}