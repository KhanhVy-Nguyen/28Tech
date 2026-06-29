// Problem: [Xâu Ký Tự]. Bài 53. Score
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string53
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
    
	string line;
	map<string, int> list;
	vector<pair<int, string>> res;
	
	while(getline(cin, line)){
        if(line.empty()) continue;
        
		int middle_index = line.find(" - ");
		
		string left = line.substr(0, middle_index);
		string right = line.substr(middle_index + 3);
		
		int last_dis = left.find_last_of(" ");
		string doiX = left.substr(0, last_dis);
		int diemX = stoi(left.substr(last_dis + 1));
		
		int first_dis = right.find_first_of(" ");
		int diemY = stoi(right.substr(0, first_dis));
		string doiY = right.substr(first_dis + 1);
		
		list[doiX] += diemX;
		list[doiY] += diemY;
	}
	
	for(auto x : list){
		res.push_back({-x.second, x.first});
	}
	
	sort(res.begin(), res.end());
	
	for(auto  x : res){
		cout<<x.second<<" "<<-x.first<<"\n";
	}
}
