// Problem: [Linked List]. Bài 1. Insert
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/linkedlist01
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

struct SinhVien{
	string ma, ten;
	double gpa;
};

struct node{
	SinhVien data;
	node *next;
};

node* makeNode(SinhVien x){
	node *newnode = new node;
	newnode -> data = x;
	newnode -> next = NULL;
	return newnode;
}

int sz(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++;
		head = head -> next;
	}
	return cnt;
}

void duyet (node *head){
	while(head != NULL){
		cout<<head -> data.ma<<" "<<head -> data.ten << " " << fixed << setprecision(2) << head -> data.gpa << endl;
		head = head -> next;
	}
	cout<<endl;
}
void themdau(node *&head, SinhVien x){
	node *newNode = makeNode(x);
	newNode -> next = head;
	head = newNode;
}

void themcuoi(node *&head, SinhVien x){
	node *newNode = makeNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	node *tmp = head;
	while(tmp -> next != NULL){
		tmp = tmp -> next;
	}
	tmp -> next = newNode;
}

void themgiua(node *&head, SinhVien x, int k){
	if(k < 1 || k > sz(head) + 1) return;
	node *newNode = makeNode(x);
	if(k == 1){
		newNode -> next = head;
		head = newNode;
		return;
	}
	node *tmp = head;
	for(int i = 1; i <= k - 2; i++){
		tmp = tmp -> next;
	}
	newNode -> next = tmp -> next;
	tmp -> next = newNode;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    node *head = NULL;
	int n; cin>>n;
	while(n--){
		int tt; cin>>tt;
		if(tt == 1){
			SinhVien s;
			cin.ignore();
			getline(cin, s.ma);
			getline(cin, s.ten);
			cin>>s.gpa;
			themdau(head, s);
		}
		else if(tt == 2){
			SinhVien s;
			cin.ignore();
			getline(cin, s.ma);
			getline(cin, s.ten);
			cin>>s.gpa;
			themcuoi(head, s);
		}
		else if(tt == 3){
			int k; cin>>k;
			SinhVien s;
			cin.ignore();
			getline(cin, s.ma);
			getline(cin, s.ten);
			cin>>s.gpa;
			themgiua(head, s, k);
		}
	}
	duyet(head);
}
