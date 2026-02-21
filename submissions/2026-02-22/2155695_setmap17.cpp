// Problem: [Set & Map]. Bài 17. Truy vấn ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

// key

int main(){
	string s; cin>>s;
	map<char,int> mp;
	for(int i=0; i<s.length(); i++){
		mp[s[i]]++;
	}
	
	//1.Tim ki tu co tan suat xuat hien nhieu nhat va thu tu tu dien nho nhat
	//uu tien ki tu co tan suat xuat hien nhieu
	//vi map sap xep tang dan 
	//
	//khong de dau >= o entry.second > max_value
	//vi neu gap =, thu tu tu dien se khong min
	int max_value=INT_MIN;
	char c_max;
	for(auto entry:mp){
		if(entry.second > max_value){
			max_value = entry.second;
			c_max = entry.first;
		}
	}
	cout<<c_max<<" "<<max_value<<endl;
	
	//2.Tim ki tu co tan suat xuat hien it nhat va thu tu tu dien lon nhat
	int min_value=INT_MAX;
	char c_min;
	for(auto entry:mp){
		if(entry.second <= min_value){
			min_value = entry.second;
			c_min = entry.first;
		}
	}
	cout<<c_min<<" "<<min_value<<endl;
	
	//3
	cout<<mp.size();
}
