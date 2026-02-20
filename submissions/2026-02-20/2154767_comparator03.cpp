// Problem: [Comparator Lower_bound Upper_bound]. Bài 3. Lower_bound, Upper_bound
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator03
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int getFirstBiggerorEqual(int a[], int l, int r, int x){
	int index = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]>=x){
			index=m;
			r=m-1;
		}
		else l=m+1;
	}
	return index;
}

int getFirstBigger(int a[], int l, int r, int x){
	int index = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]>x){
			index=m;
			r=m-1;
		}
		else l=m+1;
	}
	return index;
}

// int getFirstEqual(int a[], int n, int x){
	// int *p = lower_bound(a,a+n,x);
	// if(p==a+n || *p!=x){
		// return -1;
	// }
	// return p-a;
// }

int getFirstEqual(int a[], int l, int r, int x){
    int index = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            index = m;
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return index;
}

int getLastEqual(int a[], int l, int r, int x){
    int index = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            index = m;
            l = m + 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return index;
}

int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	//1
	int p1=getFirstBiggerorEqual(a,0,n-1,x);
	cout<<p1<<endl;
	
	//2
	int p2 = getFirstBigger(a,0,n-1,x);
	cout<<p2<<endl;
	
	//3
	int p3 = getFirstEqual(a,0,n-1,x);
	cout<<p3<<endl;
	
	//4
	int p4 = getLastEqual(a,0,n-1,x);
	cout<<p4<<endl;
	
	//5
	if(p3==-1) cout<<0<<endl;
	else cout<<p4-p3+1<<endl;
	
}
