#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArrays(vector<int> vec1, vector<int> vec2)
{
    vector<int> res;
    int i{}, j{};
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] <= vec2[j])
            res.push_back(vec1[i++]);
        else
            res.push_back(vec2[j++]);
    }
    while (i < vec1.size())
        res.push_back(vec1[i++]);

    while (j < vec2.size())
        res.push_back(vec2[j++]);

    return res;
}

int main()
{
    int n{}, x{};
    cin >> n;
    vector<int> vec1;
    vector<int> vec2;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec1.push_back(x);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec2.push_back(x);
    }
    vector<int> res;
    res = mergeSortedArrays(vec1, vec2);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}