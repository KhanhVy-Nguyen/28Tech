#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const ll mod= 1e9+7;


bool Prime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}


//Kiểm tra tất cả các chữ số của n là số nguyên tố
bool csnt(int n){
	while(n>0){
		int a=n%10;
		if( a!=2 && a!=3 && a!=5 && a!=7 ) return false;
		n/=10;
	}
	return true;

}


int main(){
    int a, b; cin >> a >> b;
    int cnt=0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && Prime(i)){
            cnt++;
        }
    }
    cout<<cnt;
    return 0; 
}
