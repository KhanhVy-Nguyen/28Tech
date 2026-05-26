// Problem: [Xâu Ký Tự]. Bài 25. Số lớn nhất, nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string25
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

string max_value(int m, int s){
	string result = "";
	while(m--){
		if(s > 9){
			result = result + '9';
			s -= 9;
		}
		else{
			result = result + to_string(s);
			s = 0;
		}
	}
	return result;
}

string min_value(int m, int s){
	string result = "";
	s--;
	while(m--){
		if(s > 9){
			result = result + '9';
			s -= 9;
		}
		else{
			result = to_string(s) + result;
			s = 0;
		}
	}
	result[0]++;
	return result;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int m, s; cin>>m>>s;
	
	cout<<min_value(m,s)<<"\n"<<max_value(m,s);
}
