// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 27. Số nhỏ nhất lớn hơn A[i]
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk27
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
	vector<int> original;
	vector<int> order;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		original.push_back(value);
		order.push_back(value);
	}
	
	sort(order.begin(), order.end());
	
	for(int x:original){
		auto it_pos = upper_bound(order.begin(), order.end(), x);
		
		if(it_pos == order.end()){
			cout<<"_"<<" ";
		}
		else{
			cout<<*it_pos<<" ";
		}
	}
}
