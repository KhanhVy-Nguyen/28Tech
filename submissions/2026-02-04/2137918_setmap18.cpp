// Problem: [Set & Map]. Bài 18. Số lượng từ khác nhau trong xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap18
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
	set<string> ss;
	while(cin>>s){
		ss.insert(s);
	}
	cout<<ss.size()<<endl;
	auto itf=ss.begin();
	auto its=ss.rbegin();
	cout<<*itf<<" "<<*its;
}
