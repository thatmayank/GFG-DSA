// 4. Leftmost Repeating Character (First Occurence)

#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int nonrepeatingChar(string &str)
{
    int count[CHAR]{};
    for (int i = 0; i < str.length(); i++)
        count[str[i]]++;

    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] == 1)
            return i;
    }
    return -1;
}



int main()
{
    string str{};
    cin >> str;
    cout << nonrepeatingChar(str);
    return 0;
}