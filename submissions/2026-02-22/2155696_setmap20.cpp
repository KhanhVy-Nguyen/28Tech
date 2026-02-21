// Problem: [Set & Map]. Bài 20. Điểm trung bình
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap20
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int main(){
	map<string, pair<int,int>, greater<string>> students;
	
	string name;
	int weight, score;
	while(cin>>name>>weight>>score){
		students[name].first += weight;
		students[name].second += weight*score;
	}
	
	for(auto entry:students){
		double avg = (1.0 * entry.second.second / entry.second.first);
		cout<<entry.first<<" : "<<fixed<<setprecision(2)<<avg<<endl;
	}
}
