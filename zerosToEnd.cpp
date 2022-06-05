#include <bits/stdc++.h>
using namespace std;

vector<int> zerosToEnd(vector<int> &vec)
{
    vector<int> vec1;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != 0)
            vec1.push_back(vec[i]);
    }
    for (int i = vec1.size(); i < vec.size(); i++)
        vec1.push_back(0);
    return vec1;
}

int main()
{
    vector<int> vec;
    int n{};
    cin >> n;
    int a{};
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.push_back(a);
    }

    vector<int> vec2 = zerosToEnd(vec);

    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << " ";
    return 0;
}