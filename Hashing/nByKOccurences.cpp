#include <bits/stdc++.h>
using namespace std;

vector<int> countOcc(vector<int> &arr, int n, int k)
{
  sort(arr.begin(), arr.end());
  int count = 1;
  vector<int> res;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] == arr[i - 1])
      count++;
    else
    {
      if (count > n / k)
        res.push_back(arr[i - 1]);
      count = 1;
    }
  }
  if (count > n / k)
    res.push_back(arr[n - 1]);
  return res;
}

int main()
{
  int n{}, k{};
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  vector<int> result;
  cin >> k;
  result = countOcc(arr, n, k);
  for (auto x : result)
    cout << x << " ";
  return 0;
}