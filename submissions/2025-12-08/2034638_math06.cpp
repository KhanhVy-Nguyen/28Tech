#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod =1e9+7;



//Hàm kiểm tra số nguyên tố
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

//Hàm tổng chữ số nguyên tố và các chữ số là số nguyên tố, check luôn 2 yêu cầu này trong cùng 1 hàm vì nó đều tách từng chữ số
bool csnt(int n){
	int total=0;
    while(n>0){
    	int ones = n%10;
    	if( ones!=2 && ones!=3 && ones!=5 && ones!=7 ){
    		return false;
    	}
    	total+=ones;
    	n/=10;
    }
    if(!Prime(total)) return false;
    else return true;
}

int main(){
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && Prime(i)){
            ++dem;
        }
    }
    cout << dem << endl;
}
