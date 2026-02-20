// Problem: [Comparator Lower_bound Upper_bound]. Bài 3. Lower_bound, Upper_bound
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator03
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//anh Binh viet

int main(){
	int n,x; cin>>n>>x;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	auto it01 = lower_bound(v.begin(), v.end(), x);
	if(it01 != v.end()){
		cout<<distance(v.begin(), it01)<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	
	auto it02 = upper_bound(v.begin(), v.end(), x);
	if(it02 != v.end()){
		cout<<distance(v.begin(), it02)<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	
	auto it03 = lower_bound(v.begin(), v.end(), x);
	if(*it03 == x){
		cout<<distance(v.begin(), it03)<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	
	auto it04 = upper_bound(v.begin(), v.end(), x);
	it04--;
	if(*it04 == x){
		cout<<distance(v.begin(), it04)<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	
	cout<<distance(it03, it04) + 1<<endl;
}
