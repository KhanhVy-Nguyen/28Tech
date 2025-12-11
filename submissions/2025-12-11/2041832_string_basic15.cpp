// Problem: [Xâu Ký Tự Cơ Bản]. Bài 15. Từ chẵn lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic15
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	string s;
	int cnt=0;
	string res="";
	while(cin>>s){
		cnt++;
		if(cnt%2!=0){
			res = res + s + " ";
		}
		else{
			string a=s;
			s.clear();
			for(int i=a.size()-1; i>=0; i--){
				s+=a[i];
			}
			res = res + s + " ";
		}
	}
	cout<<res;
}
