// Problem: [Comparator Lower_bound Upper_bound]. Bài 1. Comparison function
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator01
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int getCntEven (int n){
	int cnt=0;
	while(n>0){
		int digit = n%10;
		if(digit%2==0){
			cnt++;
		}
		n/=10;
	}
	return cnt;
}

int getCntOdd(int n){
	int cnt=0;
	while(n>0){
		int digit=n%10;
		if(digit%2!=0){
			cnt++;
		}
		n/=10;
	}
	return cnt;
}

bool cmp1(int x, int y){
	int evenX = getCntEven(x);
	int evenY = getCntEven(y);
	if(evenX != evenY){
		return evenX<evenY;
	}
	return x<y;
}

bool cmp2(int x, int y){
	return getCntOdd(x)<getCntOdd(y);
}

int main(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	vector<int> original = a;
	
	
	sort(a.begin(), a.end(), cmp1);
	for(int x:a) cout<<x<<" ";
	cout<<endl;
	
	stable_sort(original.begin(), original.end(), cmp2);
	for(int x:original) cout<<x<<" ";
	
}
