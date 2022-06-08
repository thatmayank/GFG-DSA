#include <bits/stdc++.h>
using namespace std;

bool isSubSum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], k = 0;

    for (int i = 1; i < n || k < i;)
    {
        if (curr_sum < sum)
        {
            curr_sum += arr[i];
            i++;
        }
        else if (curr_sum > sum)
        {
            curr_sum -= arr[k];
            k++;
        }
        else
            return true;
    }
    return false;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum{};
    cin >> sum;
    cout << boolalpha << isSubSum(arr, n, sum);
    return 0;
}