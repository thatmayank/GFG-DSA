#include <bits/stdc++.h>
using namespace std;

int countDist(int arr[], int n)
{
    int count{};

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            count++;
    }
    return count + 1;
}

int main()
{
    int arr[] = {10,20,10,30,10};
    int sz = 5;
    cout << countDist(arr, sz);
    return 0;
}