#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> res;
    unordered_map<int, int> m;
    for (int i = 0; i < n1; i++)
        m[arr1[i]]++;

    for (int i = 0; i < n2; i++)
        m[arr2[i]]++;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
        {
            res.push_back(it->first);
            // res.push_back(it->second);
        }
    }

    return res;
}

int main()
{
    int arr1[] = {10, 15, 20, 5, 30}, arr2[] = {30, 5, 30, 80};
    int n1 = 5, n2 = 4;

    vector<int> result;

    result = intersectionArray(arr1, arr2, n1, n2);

    cout << result.size() << endl;

    for (auto x : result)
        cout << x << " ";

    return 0;
}
