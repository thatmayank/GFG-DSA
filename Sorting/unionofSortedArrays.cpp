#include <bits/stdc++.h>
using namespace std;

void unionSortedArrays(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }

        if (j > 0 && a[j] == a[j - 1])
        {
            j++;
            continue;
        }

        if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    while (i < m)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }

        cout << a[i] << " ";
        i++;
    }

    while (j < n)
    {
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }

        cout << b[j] << " ";
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
    unionSortedArrays(a, b, m, n);
    return 0;
}