// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 18. Đếm số nguyên tố trong vùng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPrime(int n){
	if(n < 2) return false;
	else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0) return false;
		}
	}
	return true;
}

const int max_num = 1000000 + 5;
vector<int> init(max_num, 1);

void isPrimeSieve(int n){
	init[0] = 0;
	init[1] = 0;
	
	for(int i = 2; i <= n; i++){
		if(init[i] == 1){
			for(int j = i * 2; j <= n; j += i){
				init[j] = 0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    isPrimeSieve(1000005);
	int n, m, q; cin >> n >> m >> q;
	vector<vector<int>> matrix(n + 1, vector<int>(m + 1));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> matrix[i][j];
			matrix[i][j] = init[matrix[i][j]];
		}
	}
	

	vector<vector<ll>> prefix(n + 1, vector<ll>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + matrix[i][j];
		}
	}
	
	while(q--){
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		
		int res = prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
		cout << res <<"\n";
	}
}
