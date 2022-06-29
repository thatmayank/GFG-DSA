// 2. Check if a string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(string &str)
{
    int n = str.length();
    int begin = 0, end = n - 1;
    while (begin <= end)
    {
        if (str[begin] != str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}

int main()
{
    string str;
    getline(cin, str);
    cout << boolalpha << palindromeCheck(str);
    return 0;
}