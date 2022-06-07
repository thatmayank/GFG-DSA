#include <bits/stdc++.h>
using namespace std;

vector<int> leaderArray(vector<int> vec)
{
    vector<int> vec1;
    vec1.push_back(vec[vec.size() - 1]);
    for (int i = vec.size() - 2; i >= 0; i--)
    {
        if (vec[i] > vec1.back())
        {
            vec1.push_back(vec[i]);
        }
    }
    reverse(vec1.begin(), vec1.end());
    return vec1;
}

int main()
{
    int n{}, a{};
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    vec = leaderArray(vec);

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}