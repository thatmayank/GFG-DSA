// 5. Reverse Words in String

#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int begin, int end)
{
    while (begin <= end)
    {
        swap(str[begin], str[end]);
        begin++;
        end--;
    }
}

void reverseWords(string &str)
{
    string res;
    int begin = 0;
    for (int end = 0; end < str.length(); end++)
    {
        if (str[end] == ' ')
        {
            reverse(str, begin, end - 1);
            begin = end + 1;
        }
    }

    reverse(str, begin, str.length() - 1);
    reverse(str, 0, str.length() - 1);

    
}

int main()
{
    string str{};
    getline(cin, str);
    reverseWords(str);
    cout << str;
    return 0;
}