// Problem: [Xâu Ký Tự Cơ Bản]. Bài 29. Già và trẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic29
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
    
	string ty, teo; cin>>ty>>teo;
	string yty = ty.substr(6);
	string yteo = teo.substr(6);
	
	string mty = ty.substr(3, 2);
	string mteo = teo.substr(3, 2);
	
	string dty = ty.substr(0, 2);
	string dteo = teo.substr(0, 2);
	
	if(yty < yteo) cout<<"28tech";
	else if (yty > yteo) cout<<"29tech";
	else{
		if(mty < mteo) cout<<"28tech";
		else if(mty > mteo) cout<<"29tech";
		else{
			if(dty < dteo) cout<<"28tech";
			else if(dty > dteo) cout<<"29tech";
			else cout<<"30tech";
		}
	}
}
