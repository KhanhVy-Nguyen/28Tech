// Problem: [Xâu Ký Tự]. Bài 19. Tạo email và mật khẩu 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string19
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
	
	while(found_pos != string::npos){
		size_t cnt = found_pos - start_pos;
		string token = haystack.substr(start_pos, cnt);
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


map<string, int> mp;

string create_email(string name){
	transform(name.begin(), name.end(), name.begin(), ::tolower);
	stringstream builder;
	auto words = split(name, " ");
	builder<<words.back();
	for(auto i = 0 ; i < words.size() - 1; i++){
		builder<<words[i][0];
	}
	string result = builder.str();
	mp[result]++;
	if(mp[result] == 1){
		builder<<"@xyz.edu.vn";
	}
	else{
		builder<<mp[result]<<"@xyz.edu.vn";
	}
	return builder.str();
}

string create_password(string dob){
	auto word = split(dob, "/");
	stringstream builder;
	for(auto c : word){
		builder<<stoi(c);
	}
	return builder.str();
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int q; cin>>q;
	cin.ignore();
	for(int i = 0 ; i < q; i++){
		string line; getline(cin, line);
		auto words = split(line, " ");
		string dob = words[words.size() - 1];
		
		stringstream builder;
		for(int i=0; i < words.size() - 1; i++){
			builder<<words[i]<<" ";
		}
		string name = builder.str();
		
		cout<<create_email(name)<<endl<<create_password(dob)<<endl;
	}
}
