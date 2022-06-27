#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(int arr1[], int arr2[], int n1, int n2) {
    if(n1 > n2) return intersectionArray(arr2, arr1, n2, n1);
    
    vector<int> res;
    
    for(int i = 0; i < n1; i++) {
        bool flag = false;
        
        if(i > 0) {
        for(int j = i - 1; j >= 0; j--) {
            if(arr1[i] == arr1[j]) {
                flag = true;
                break;
            }
        }
        }
        
        if(flag == false) {
        
        
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                res.push_back(arr1[i]);
                break;
            }
        }
        }
    }
    return res;
}

int main() {
	int arr1[] = {10,60,43,56,32,22,90}, arr2[] = {101,445,1,34,43,96,12,60};
	int n1 = 7, n2 = 8;
	
	vector<int> result;
	
	result = intersectionArray(arr1, arr2, n1, n2);
	
	for(auto x: result) cout << x << " ";
	
	return 0;
}
