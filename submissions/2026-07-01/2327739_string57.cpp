// Problem: [Xâu Ký Tự]. Bài 57. 28Tech & Chemistry
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string57
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int elements = 10;
	map<string, int> mp;
	while(elements--){
		string name;
		int mass;
		cin>>name>>mass;
		mp[name] = mass;
	}
	
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		ll total_mass = 0;
		int i = 0;
		int n = s.size();
		while(i < n){
			string element_name = "";
			while(i < n && isalpha(s[i])){
				element_name += s[i];
				i++;
			}
			
			string element_mass = "";
			while(i < n && isdigit(s[i])){
				element_mass += s[i];
				i++;
			}
			
			int quantity = element_mass.empty()? 1 : stoi(element_mass);
			
			total_mass += (ll)mp[element_name] * quantity;
		}
		
		cout<<total_mass<<"\n";
	}
}
