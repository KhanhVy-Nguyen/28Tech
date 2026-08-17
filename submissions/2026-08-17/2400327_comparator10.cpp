// Problem: [Comparator Lower_bound Upper_bound]. Bài 10. Sắp xếp pair 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator10
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin >> n;
	vector<pair<int,int>> v;
	for(int i = 0; i < n; i++){
		int a,b ; cin >> a>> b;
		v.emplace_back(a, b);
	}
	
	sort(v.begin(), v.end(), [](const pair<int, int>&a, const pair<int, int>& b){
		auto diffa = abs(a.first - a.second);
		auto diffb = abs(b.first - b.second);
		
		if(diffa != diffb){
			return diffa < diffb;
		}
		else{
			if(a.first != b.first){
				return a.first < b.first;
			}
			
		}
		return a.second > b.second;
	});
	
	for(auto x : v){
		cout<< x.first << " " << x.second << endl;
	}
}
