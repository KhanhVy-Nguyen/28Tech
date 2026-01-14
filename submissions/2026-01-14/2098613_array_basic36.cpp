// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 36. Vị trí lớn nhất, nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic36
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

/*Dòng 1 in giá trị nhỏ nhất

Dòng 2 in các chỉ số chứa giá trị nhỏ 
nhất từ trái qua phải, cách nhau 1 dấu cách

Dòng 3 in giá trị lớn nhất

Dòng 4 in ra các chỉ số chứa giá trị lớn 
nhất từ phải qua trái, cách nhau 1 dấu cách
*/
int main(){
	int n; cin>>n;
	int a[n];
	vector <int> Min;
	vector <int> Max;
	int fmin=0, fmax =0;
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=1; i<n; i++){
		fmin=min(a[i-1],a[i]);
		fmax=max(a[i-1],a[i]);
	}
	for(int i=0; i<n; i++){
		if(fmin==a[i]){
			Min.push_back(i);
		}
		else if(fmax==a[i]){
			Max.push_back(i);
		}
	}
	sort(Max.begin(), Max.end(), greater<int>());
	
	cout<<fmin<<endl;
	for(auto v:Min) cout<<v<<" ";
	cout<<endl;
	cout<<fmax<<endl;
	for(auto m:Max) cout<<m<<" ";
	
	
}
