// Problem: [Xâu Ký Tự]. Bài 58. Rút gọn đa thức
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string58
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

vector<string> split(const string& haystack, const string& needle){
	vector<string> result;
	size_t start_pos = 0;
	size_t found_pos = haystack.find(needle, start_pos);
	while(found_pos != string :: npos){
		size_t count = found_pos - start_pos;
		string token = haystack.substr(start_pos, count);
		if(!token.empty()){
			result.push_back(token);
		}
		start_pos = found_pos + needle.length();
		found_pos = haystack.find(needle, start_pos);
	}
	string last_token = haystack.substr(start_pos);
	if(!last_token.empty()){
		result.push_back(last_token);
	}
	return result;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		map<int, int> result;
		string line;
		getline(cin, line);
		auto parts = split(line, " + ");
		for(auto part : parts){
			auto value = split(part, "x^");
			result[stoi(value[1])] += stoi(value[0]);
		}
		
		for(auto entry = result.begin(); entry != result.end(); entry++){
			cout<<entry->second<<"x^"<<entry->first;
			if(entry != (--result.end())){
				cout<<" + ";
			}
		}
		cout<<endl;
	}
}
