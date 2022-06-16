#include <bits/stdc++.h>
using namespace std;

void mergeFunction(vector<int> &vec, int low, int mid, int high)
{
    vector<int> left;
    vector<int> right;

    for (int i = low; i <= mid; i++)
        left.push_back(vec[i]);

    for (int i = mid + 1; i <= high; i++)
        right.push_back(vec[i]);

    vec.clear();

    int i{}, j{}; // left size = mid - low + 1 and right size = high - mid

    while (i < left.size() && j < right.size())
    {
        if (left[i] <= right[j])
            vec.push_back(left[i++]);
        else
            vec.push_back(right[j++]);
    }

    while (i < left.size())
        vec.push_back(left[i++]);
    while (j < right.size())
        vec.push_back(right[j++]);
}

int main()
{
    int n{}, x{};
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    int low{}, mid{}, high{};
    cin >> low >> mid >> high;
    mergeFunction(vec, low, mid, high);
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
    return 0;
}