// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 4. Die hard
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced04
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

bool isDieHard(vector<int> v){
	int c25 = 0, c50 = 0;
	for(int i=0; i < v.size(); i++){
		if(v[i] == 25){
		c25++;
		}
		else if(v[i] == 50){
		if(c25 == 0) return false;
		c50++;
		c25--;
		}
		else if(v[i] == 100){
		if(c25 < 1 || c25 * 25 + c50 * 50 < 75) return false;
		if(c50 != 0){
			c50--;
			c25--;
		}
		else{
			c25 -= 3;
		}
	}
	}
	
	return true;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	cout<<(isDieHard(v)? "YES" : "NO");
}
