// 3. Check if a string is subsequence or not

#include <bits/stdc++.h>
using namespace std;

bool subsequenceCheck(string &str1, string &str2, int n1, int n2)
{
    if (n2 == 0)
        return true;
    if (n1 == 0)
        return false;

    if (str1[n1 - 1] == str2[n2 - 1])
        return subsequenceCheck(str1, str2, n1 - 1, n2 - 1);
    else
        return subsequenceCheck(str1, str2, n1 - 1, n2);
}

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int n1 = str1.size();
    int n2 = str2.size();
    cout << boolalpha << subsequenceCheck(str1, str2, n1, n2);
    return 0;
}