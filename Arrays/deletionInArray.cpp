#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr [] = {3,8,12,5,6};
    // int size = *(&arr + 1) - arr;
    // int del = 12;

    int arr[] = {3, 8, 12, 5, 6, 44, 13, 9, 2};
    int size = *(&arr + 1) - arr;
    // int del = 52;
    int del = 8;

    // index of element to be deleted
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == del)
            break;
    }

    if (i == size)
    {
        for (int k = 0; k < size; k++)
            cout << arr[k] << " ";
        return 0;
    }

    for (int j = i; j < size - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    size--;

    for (int k = 0; k < size; k++)
        cout << arr[k] << " ";

    return 0;
}