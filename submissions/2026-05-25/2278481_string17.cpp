// Problem: [Xâu Ký Tự]. Bài 17. Chuẩn hóa tên 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string17
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

string date_convert(const string& date){
	const string demiliter = "/";
	auto parts = split(date, demiliter);
	stringstream builder;
	builder<<setw(2)<<setfill('0')<<parts[0]<<demiliter;
	builder<<setw(2)<<setfill('0')<<parts[1]<<demiliter;
	builder<<setw(4)<<setfill('0')<<parts[2];
	
	return builder.str();
}

string name_convert(const string& name){
	stringstream builder;
	auto parts = split(name, " ");
	for(auto word : parts){
		word[0] = toupper(word[0]);
		transform(word.begin() + 1, word.end(), word.begin() + 1, ::tolower);
		builder<<word<<" ";
	}
	return builder.str();
}

string name_convert_1(const string& name){
	stringstream builder;
	auto parts = split(name, " ");
	for(int i = 0 ; i < parts.size() - 1; i++){
		parts[i][0] = toupper(parts[i][0]);
		transform(parts[i].begin() + 1, parts[i].end(), parts[i].begin() + 1, ::tolower);
		builder<<parts[i]<<((i != parts.size() - 2)? " ":"");
	}
	builder<<", ";
	transform(parts.back().begin() , parts.back().end(), parts.back().begin(), ::toupper);
	builder<<parts.back();
	return builder.str();
}

string name_convert_2(const string& name){
	stringstream builder;
	auto parts = split(name, " ");
	transform(parts.back().begin(), parts.back().end(), parts.back().begin(), ::toupper);
	builder<<parts.back();
	builder<<", ";
	
	for(int i = 0 ; i < parts.size() - 1; i++){
		parts[i][0] = toupper(parts[i][0]);
		transform(parts[i].begin() + 1, parts[i].end(), parts[i].begin() + 1, ::tolower);
		builder<<parts[i]<<((i != parts.size() - 2)? " ":"");;
	}
	
	return builder.str();
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string name; getline(cin, name); 
	cout<<name_convert_1(name)<<"\n"<<name_convert_2(name);
	
}
