#include <bits/stdc++.h>
using namespace std;

void printFreq(int arr[], int n)
{
    int freq = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            freq++;
        else
        {
            cout << arr[i] << " " << freq << "\n";
            freq = 1;
        }
    }
    cout << arr[n - 1] << " " << freq << "\n";
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    printFreq(arr, n);
    return 0;
}