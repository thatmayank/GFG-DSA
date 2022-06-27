#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequencies(int arr[], int n)
{
    sort(arr, arr + n);
    vector<int> res;

    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
        else
        {
            res.push_back(arr[i]);
            res.push_back(count);
            count = 1;
        }
    }
    res.push_back(arr[n - 1]);
    res.push_back(count);
    return res;
}

int main()
{
    int arr[] = {10, 20, 10, 20, 30};
    int n = 5;
    vector<int> result = countFrequencies(arr, n);
    for (int x : result)
        cout << x << " ";
    return 0;
}