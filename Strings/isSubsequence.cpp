// 3. Check if a string is subsequence or not

#include <bits/stdc++.h>
using namespace std;

bool subsequenceCheck(string &str1, string &str2)
{
    int n1 = str1.length();
    int n2 = str2.length();

    if (n2 > n1)
        return false;

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    if (j == n2)
        return true;
    else
        return false;
}

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout << boolalpha << subsequenceCheck(str1, str2);
    return 0;
}