#include <bits/stdc++.h>
using namespace std;

int sqrtFloor(int n)
{
    int left = 1, right = n;
    int res{};

    while (left <= right) // 1 <= 10, 1 <= 4, 2 <= 4, 4 <= 4, 4 <= 3
    {
        int mid = left + (right - left) / 2; // 5 , 2, 3,4
        int mysq = mid * mid;                // 25 , 4, 9, 16

        if (mysq == n)
            return mid;
        else if (mysq > n)
            right = mid - 1; // 25>10=right = 4,3
        else
        {
            left = mid + 1; // 3, 4
            res = mid;      // 2, 3
        }
    }
    return res;
}

int main()
{
    int n{};
    cin >> n;
    cout << sqrtFloor(n);
    return 0;
}