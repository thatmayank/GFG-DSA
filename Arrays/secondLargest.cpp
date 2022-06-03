#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int max = arr[0], max2{};
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > max2)
            max2 = arr[i];
    }
    return max2;
}

int main()
{
    cout << "Enter size of array: ";
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i{}; i < n; i++)
        cin >> arr[i];
    int element = secondLargest(arr, n);
    cout << "Second largest element of array is: " << element;
}