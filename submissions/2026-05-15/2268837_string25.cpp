// Problem: [Xâu Ký Tự]. Bài 25. Số lớn nhất, nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string25
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int m, s; cin>>m>>s;
	
	if (s > 9 * m || (s == 0 && m > 1)) {
        cout << "NOT FOUND" << endl;
        return 0;
    }
    if (s == 0 && m == 1) {
        cout << "0 0" << endl;
        return 0;
    }
    
    string big_num = "";
    string small_num = "";
    int tmp_s = s;
    for(int i = 0; i < m; i++){
    	if(tmp_s >= 9){
    		big_num += '9';
    		tmp_s -= 9;
    	}
    	else{
    		big_num += to_string(tmp_s);
    		tmp_s = 0;
    	}
    }
    
    tmp_s = s - 1;
    for (int i = 0; i < m - 1; i++) {
        if (tmp_s >= 9) {
            small_num += '9';
            tmp_s -= 9;
        } 
        else {
            small_num += to_string(tmp_s);
            tmp_s = 0;
        }
    }
    
    small_num += to_string(tmp_s + 1);
    reverse(small_num.begin(), small_num.end());
    
    cout<<small_num<<"\n"<<big_num;
}
