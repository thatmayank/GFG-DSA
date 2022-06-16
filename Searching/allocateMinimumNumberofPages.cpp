#include <bits/stdc++.h>
using namespace std;

bool isFeasible(vector<int> &pages, int students, int mid)
{
    int req = 1, sum = 0;
    for (int i = 0; i < pages.size(); i++)
    {
        if (sum + pages[i] > mid)
        {
            req++;
            sum = pages[i];
        }
        else
            sum += pages[i];
    }
    return (req <= students);
}

int minNumofPages(vector<int> &pages, int students)
{
    int n = pages.size();
    int sum{}, mx{};
    for (int i = 0; i < n; i++)
    {
        sum += pages[i];
        mx = max(mx, pages[i]);
    }
    //[mx, sum] students
    int left = mx, right = sum, res = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (isFeasible(pages, students, mid))
        {
            res = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return res;
}

int main()
{
    int n{}, x{}, students{};
    cin >> n;
    vector<int> pages;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pages.push_back(x);
    }
    cin >> students;
    cout << minNumofPages(pages, students);
    return 0;
}
