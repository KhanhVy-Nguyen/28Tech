// Problem: [Set & Map]. Bài 25. Set và phần tử thứ 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap25
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
	set<int> s;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		s.insert(a);
	}
	
	auto min1 = s.begin();
	auto min2 = next(s.begin());
	auto max1 = s.rbegin();
	auto max2 = next(s.rbegin());
	
	cout<<s.size()<<endl;
	cout<<*max1<<" "<<*min1<<endl;
	cout<<*max2<<" "<<*min2<<endl;
}
