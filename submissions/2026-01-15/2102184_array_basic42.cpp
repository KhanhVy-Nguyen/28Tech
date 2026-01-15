// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 42. Next greater element
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic42
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

vector<int> nextLargerElement(vector<int> &arr) {
    int n = arr.size();
    vector<int> res(n, -1);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                res[i] = arr[j];
                break;
            }
        }
    }

    return res;
}

int main(){
	int n; cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++) {
		int a; cin>>a;
		v.push_back(a);
	}
	
	vector<int> res=nextLargerElement(v);
	for(int x:res) cout<<x<<" ";
	
}
