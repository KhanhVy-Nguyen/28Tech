// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 19. Dãy con dài nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced19
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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
    	int value; cin>>value;
    	v.push_back(value);
    }
    
    int current_sum = v[0], current_length = 1;
    int max_sum = v[0], max_length = 1;
    int index = -1;
    for(int i=1; i<n; i++){
    	if(v[i] != v[i-1]){
    		current_length++;
    		current_sum += v[i];
    	}
    	else{
    		current_length = 1;
    		current_sum = v[i];
    	}
    	
    	if(current_length > max_length){
    		max_length = current_length;
    		max_sum = current_sum;
    		index = i;
    	}
    	else if(current_length == max_length){
    		if(current_sum > max_sum){
    			max_sum = current_sum;
    			index = i;
    		}
    	}
    }
    
    cout<<max_length<<"\n";
    for(int i = index - max_length + 1; i <= index; i++){
    	cout<<v[i]<<" ";
    }
   
}
