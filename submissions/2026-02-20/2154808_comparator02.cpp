// Problem: [Comparator Lower_bound Upper_bound]. Bài 2. Sắp xếp theo trị tuyệt đối
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator02
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//mau anh Binh 

int main(){
	vector<int> v;
	int n,x; cin>>n>>x;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	sort(v.begin(), v.end(), [x](const& a, const& b){
		int distance_a = abs(a-x);
		int distance_b = abs(b-x);
		
		if(distance_a != distance_b){
			return distance_a < distance_b;
		}
		return a<b;
	});
	for(auto x:v) cout<<x<<" ";
	cout<<endl;
	
	sort(v.begin(), v.end(), [x](const& a, const& b){
		if(a%2==0 && b%2!=0) return true;
		else if(a%2!=0 && b%2==0) return false;
		else if(a%2==0 && b%2==0) return a<b;
		else return a>b;
	});
	for(auto x:v) cout<<x<<" ";
	cout<<endl;
}
