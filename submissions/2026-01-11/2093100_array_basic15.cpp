// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 15. Số lớn nhất, lớn thứ 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic15
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	multiset<int> s;
	for(int i=1;i<=n; i++){
		int a;cin>>a;
		s.insert(a);
	}
	auto it=s.rbegin();
	int MAX=*it;
	it++;
	int MAX2=*it;
	cout<<MAX<<" "<<MAX2;
	
}
