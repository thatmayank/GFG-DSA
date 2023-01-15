#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int begin, int end)
{
    while (begin < end)
    {
        swap(s[begin], s[end]);
        begin++;
        end--;
    }
}
bool isRotated(string str1, string str2)
{
    string lr = str1;
    string rr = str1;
    int n = str1.size();
    // right rotation
    reverse(lr, 0, n - 3);
    reverse(lr, n - 2, n - 1);
    reverse(lr, 0, n - 1);

    // left rotation
    reverse(rr, 0, 1);
    reverse(rr, 2, n - 1);
    reverse(rr, 0, n - 1);

    if (str2 == rr || str2 == lr)
        return true;
    return false;
}

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    cout << boolalpha << isRotated(a, b);
    return 0;
}