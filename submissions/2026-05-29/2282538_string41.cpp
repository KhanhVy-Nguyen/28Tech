// Problem: [Xâu Ký Tự]. Bài 41. Số nhị phân chia hết cho 2^K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string41
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
    
	string s; cin>>s;
	int k; cin>>k;
	for(int i = s.size() - 1; i >= s.size() - k; i--){
		if(s[i] == '1'){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
