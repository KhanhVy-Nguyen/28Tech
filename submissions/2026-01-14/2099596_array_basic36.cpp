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
	for(int i=0; i<n; i++) cin>>a[i];
	vector<int> Min;
	vector<int> Max;
	
	int fmin=INT_MAX;
	int fmax=INT_MIN;
	for(int i=0; i<n; i++){
		fmin=min(fmin,a[i]);
		fmax=max(fmax,a[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i]==fmin) Min.push_back(i);
		else if (a[i]==fmax) Max.push_back(i);
	}
	
	cout<<fmin<<endl;
	for(int m:Min) cout<<m<<" ";
	cout<<endl;
	cout<<fmax<<endl;
	sort(Max.begin(), Max.end(), greater<int>());
	for(int m:Max) cout<<m<<" ";
}
