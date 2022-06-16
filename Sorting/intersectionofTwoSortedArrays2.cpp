#include <bits/stdc++.h>
using namespace std;

void intersectionSortedArrays(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
}

int main()
{
    int m{}, n{};
    cin >> m >> n;
    int a[m]{};
    int b[n]{};
    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    intersectionSortedArrays(a, b, m, n);
    return 0;
}