#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
struct Node{
	int val;
	Node* next=NULL;
	Node* pre=NULL;
};
Node* root;
char opt[10];
set<int> res;
void DFS(int k,int n_1) {
	if(k==n_1) {
		res.insert(root->val);
		return;
	}
	Node* current1=root;
	Node* current2=root;
	while(current1!=NULL) {
		current2=current1->next;
		while(current2!=NULL) {
			int temp=current1->val;
			if(opt[k]=='+') {
				current1->val=current1->val+current2->val;
			}else if(opt[k]=='*') {
				current1->val=current1->val*current2->val;
			}
			current2->pre->next=current2->next;
			if(current2->next!=NULL)current2->next->pre=current2->pre;
			DFS(k+1,n_1);
			current1->val=temp;
			current2->pre->next=current2;
			if(current2->next!=NULL)current2->next->pre=current2;
			current2=current2->next;
		}
		current1=current1->next;
	}
}

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	Node* p1=new Node();
	Node* p2;
	root=p1;
	int val1;
	scanf("%d",&val1);
	p1->val=val1;
	for(int i=1;i<n;i++) {
		p2=new Node();
		int val;
		scanf("%d",&val);
		p2->val=val;
		p1->next=p2;
		p2->pre=p1;
		p1=p2;
	}
	p2=root;
	getchar();
	char op;
	for(int i=0;i<n-1;i++) {
		scanf("%c",&op);
		opt[i]=op;
	}
	DFS(0,n-1);
	for(set<int>::iterator it=res.begin();it!=res.end();it++) {
		if(it!=res.begin()) {
			printf(" ");
		}
		printf("%d",*it);
	}
}

//struct CNode{
//	int index;
//	int val;
//	char opt;
//	CNode* next;
//	void cal() {
//		index=next->index;
//		if(opt=='+') {
//			val=val+next->val;
//		} else if(opt=='*') {
//			val=val*next->val;
//		}
//		opt=next->opt;
//		next=next->next;
//	}
//	void copy(CNode* a){
//		index=a->index;
//		val=a->val;
//		opt=a->opt;
//		next=a->next;
//	}
//};
//
//CNode* mp[10];
//bool unvisited[10];
//set<int> s;
//
//void DFS(int k,int n_1) {
//	if(k==n_1) {
//		s.insert(mp[0]->val);
//		printf("%d\n",mp[0]->val);
//		return;
//	}
//	for(int i=0;i<n_1;i++) {
//		if(unvisited[i]) {
//			CNode* temp=new CNode();
//			temp->copy(mp[i]);
//			mp[i]->cal();
//			mp[temp->next->index]=mp[i];
//			unvisited[i]=false;
//			DFS(k+1,n_1);
//			unvisited[i]=true;
//			mp[temp->next->index]=temp->next;
//			mp[i]->copy(temp);
//			delete temp;
//		}
//	}
//}
//int main() {
//	int n,val;
//	char op;
//	scanf("%d",&n);
//	getchar();
//	for(int i=0;i<n;i++) {
//		scanf("%d",&val);
//		mp[i]=new CNode();
//		mp[i]->index=i;
//		mp[i]->val=val;
//		if(i!=0) {
//			mp[i-1]->next=mp[i];
//		}
//	}
//	getchar();
//	for(int i=0;i<n-1;i++) {
//		scanf("%c",&op);
//		mp[i]->opt=op;
//		unvisited[i]=true;
//	}
//	DFS(0,n-1);
//	for(set<int>::iterator it=s.begin();it!=s.end();it++) {
//		if(it!=s.begin()) {
//			printf(" ");
//		}
//		printf("%d",*it);
//	}
//}
