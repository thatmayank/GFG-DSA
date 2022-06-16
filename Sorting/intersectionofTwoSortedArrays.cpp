#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionSortedArrays(vector<int> vec1, vector<int> vec2)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] == vec2[j])
        {
            if (res.size() == 0 || (vec1 [i] != res.back() && vec2[j] != res.back()))
            {
                res.push_back(vec1[i]);
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        else if (vec1[i] < vec2[j])
            i++;
        else
            j++;
    }

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
    res = intersectionSortedArrays(vec1, vec2);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}