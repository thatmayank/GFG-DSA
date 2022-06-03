#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 5, 20, 8};
    int size = *(&arr + 1) - arr;
    int largest = arr[0];

    int i{};
    int idx{};
    for (i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            idx = i;
        }
    }
    cout << "Largest element is " << largest << " at index " << idx;

    return 0;
}