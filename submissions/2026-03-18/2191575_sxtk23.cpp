// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 23. Sắp xếp theo tần suất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk23
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int main(){
	int n; cin>>n;
	vector<int> v1;
	vector<int> v2;
	map<int,int> mp;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v1.push_back(value);
		v2.push_back(value);
		mp[value]++;
	}
	
	//neu viet [mp] -> bao loi: error: passing 'const std::map<int, int>' as 'this' argument discards qualifiers
	//trong lambda cua sort, comparator mac dinh la const function
	//cac bien capture vao (nhu mp) se bi coi la const
	//van de: toan tu operator[] cua std::map khong phai const vi no co the tao phan tu moi neu key chua ton tai
	//-> khong dung duoc voi const map
	//cach 1: [mp] -> [&mp]
	//cach 2: dung ham lay ra gia tri cua map: .at() 
	//ham .at(): chi de lay ra phan second ma khong can truyen them 
	sort(v1.begin(), v1.end(),[mp](int a, int b){
		if(mp.at(a) != mp.at(b)){
			return mp.at(a)>mp.at(b);
		}
		return a<b;
	});
	for(int x:v1) cout<<x<<" ";
	cout<<endl;
	
	stable_sort(v2.begin(), v2.end(), [mp](int a, int b){
		return mp.at(a)>mp.at(b);
	});
	
	for(auto x:v2){
		while(mp[x]!=0){
			cout<<x<<" ";
			mp[x]--;
		}
	}
	cout<<endl;
}
