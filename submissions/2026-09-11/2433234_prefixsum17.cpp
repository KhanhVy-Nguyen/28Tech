// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 17. Đoạn con cân bằng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		if(a == 0) a = -1;
		v.push_back(a);
	}
	
	int cur_sum = 0, max_len = 0;
	
	map<int, int> prefix_cnt;
	prefix_cnt[0] = -1;
	
	for(int i = 0; i < n; i++){
		cur_sum += v[i];
		
		if(prefix_cnt.find(cur_sum) != prefix_cnt.end()){
			max_len = max(max_len, i - prefix_cnt[cur_sum]);
		}
		else{
			prefix_cnt[cur_sum] = i;
		}
		
	}
	
	cout <<((max_len > 0)? to_string(max_len) : "28tech");
}
