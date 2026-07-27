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

//k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string line;
	map<string, int> goals;
	
	regex pattern(R"((.+?) (\d+) - (\d+) (.+))");
	
	while(getline(cin,line)){
		smatch match;
		if(regex_match(line, match, pattern)){
			string teamA = match[1];
			int scoreA = stoi(match[2]);
			int scoreB = stoi(match[3]);
			string teamB = match[4];
			
			goals[teamA] += scoreA;
			goals[teamB] += scoreB;
		}
	}
	
	vector<pair<string,int>> result(goals.begin(), goals.end());
	
	sort(result.begin(), result.end(), [](const auto &a, const auto &b){
		if(a.second != b.second) return a.second > b.second;
		return a.first < b.first; 
	});
	
	for(auto &[team, score] : result){
		cout<<team<<" "<<score<<"\n";
	}
}
