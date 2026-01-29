// Problem: [Set & Map]. Bài 5. Tần suất ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap05
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int mark[100000];

int main(){
	int min=INT_MAX;
	int max=INT_MIN;
	
	int n; cin>>n;
	set<int> s;
	while(n--){
		char c; cin>>c;
		int temp=c;
		if(temp<min) min=temp;
		else if(temp>max) max=temp;
		mark[(int)c]++;
		s.insert(c);
	}
	
	char Minc=min;
	char Maxc=max;
	
	cout<<Minc<<" "<<mark[(int)Minc]<<endl<<endl;
	cout<<Maxc<<" "<<mark[(int)Maxc]<<endl<<endl;
	for(auto x:s) cout<<(char)x<<" "<<mark[x]<<endl;
	cout<<endl;	
	for(auto it=s.rbegin(); it!=s.rend(); it++) {
		int tem=*it;
		cout<<(char)tem<<" "<<mark[tem]<<endl;
	}
	
}
