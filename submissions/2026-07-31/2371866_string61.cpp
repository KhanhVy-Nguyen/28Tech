// Problem: [Xâu Ký Tự]. Bài 61. Tổng 2 số nguyên lớn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string61
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

string add(string n1, string n2){
	string result = "";
	int carry = 0;
	if(n1.size() < n2.size()){
		swap(n1, n2);
	}
	
	int size1 = n1.size();
	int size2 = n2.size();
	
	for(int i = 0; i < size1; i++){
		int digit1 = n1[size1 - 1 - i] - '0';
		int digit2 = (i < size2)? n2[size2 - 1 - i] - '0' : 0;
		
		int sum = digit1 + digit2 + carry;
		
		carry = sum / 10;
		
		result = result + to_string(sum % 10);
	}
	
	if(carry != 0){
		result = result + to_string(carry);
	}
	
	reverse(result.begin(), result.end());
	
	return result;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
    	string a,b; cin>>a>>b;
    	string result = add(a, b);
    	cout<<result<<endl;
    }
	
}
