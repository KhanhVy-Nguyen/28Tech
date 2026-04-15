// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 24. Vị trí đầu tiên và cuối cùng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced24
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
    
	int n,x; cin >> n >> x;
	vector<int> v;
	for (int i = 0; i < n; i++){
		int value; cin >> value;
		v.push_back(value);
	}
	
	auto it_first = find(v.begin(), v.end(), x);
	int last_index = 0;
	for(int i = 0; i<n; i++){
		if(v[i] == x){
			last_index = i;
		}
	}
	if(it_first == v.end()){
		cout<<-1<<" "<<-1;
	}
	else{
		int first_index = it_first - v.begin();
		cout<<first_index + 1<<" "<<last_index + 1;
	}
	
}
