// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 36. Hòa nhạc
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk36
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,m; cin>>n>>m;
	multiset<int> ms;
	vector<int> v(m);
	for(int i=0; i<n; i++){
		int value; cin>>value;
		ms.insert(value);
	}
	for(int &x : v) cin>>x;
	
	for(int x:v){
		auto it = ms.upper_bound(x);
		//khong dung ms.end() vi upper_bound(x) tra ve phan tu dau tien 
		//lon hon x. neu tat ca ve trong cua hang deu <= x, upper_bound 
		//khong tim thay se tra ve ms.end()-> van ban duoc ve, khong in -1
		//upper_bound tra ve ms.begin() khi nao?. ms.begin() la chiec ghe re nhat
		//ngay ca chiec ve re nhat > x, thi phan tu dau tien lon hon x se la
		//ms.begin(). luc nay khong the lui duoc nua vi truoc begin() khong con
		//ve nao -> day moi la luc in -1
		
		if(it == ms.begin()){
			cout<<-1<<endl;
		}
		else{
			it--;
			cout<<*it<<endl;
			ms.erase(it);
		}
		
	}
}
