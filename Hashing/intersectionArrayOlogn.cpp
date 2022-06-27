#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(int arr1[], int arr2[], int n1, int n2)
{

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);
    vector<int> res;

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1])
        {
            j++;
            continue;
        }

        if (arr1[i] == arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }

    return res;
}

int main()
{
    int arr1[] = {10, 60, 43, 56, 32, 22, 90}, arr2[] = {101, 445, 1, 34, 43, 96, 12, 60};
    int n1 = 7, n2 = 8;

    vector<int> result;

    result = intersectionArray(arr1, arr2, n1, n2);

    for (auto x : result)
        cout << x << " ";

    return 0;
}
