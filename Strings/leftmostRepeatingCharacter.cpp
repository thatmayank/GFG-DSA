// 4. Leftmost Repeating Character (First Occurence)

#include <bits/stdc++.h>
using namespace std;

// Approach 1 - 
// int repeatingChar(string &str)
// {
//     int count[256]{};
//     for (int i = 0; i < str.length(); i++)
//         count[str[i]]++;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (count[str[i]] > 1)
//             return i;
//     }
//     return -1;
// }

// Approach 2
int repeatingChar(string &str)
{
    bool visited[256]{false};
    // fill(visited, visited + 256, false);
    int res = -1;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (visited[str[i]] == true)
            res = i;
        else
            visited[str[i]] = true;
    }
    return res;
}

int main()
{
    string str{};
    cin >> str;
    cout << repeatingChar(str);
    return 0;
}