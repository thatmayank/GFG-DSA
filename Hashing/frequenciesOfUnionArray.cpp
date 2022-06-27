#include <bits/stdc++.h>
using namespace std;

int countUnionArray(int arr1[], int arr2[], int n1, int n2)
{
    unordered_set<int> s;

    for (int i = 0; i < n1; i++)
        s.insert(arr1[i]);
    for (int i = 0; i < n2; i++)
        s.insert(arr2[i]);

    return s.size();
}

int main()
{
    int arr1[] = {3, 3, 3}, arr2[] = {3, 3};
    int n1 = 3, n2 = 2;

    cout << countUnionArray(arr1, arr2, n1, n2);

    return 0;
}
