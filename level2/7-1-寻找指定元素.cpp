#include <cstdio>
using namespace std;
int vals[100000];
int find(int x,int a,int b) {
	if(vals[b]<x||vals[a]>x) return -1;
	if(vals[a]==x) return a;
	if(vals[b]==x) return b;
	if(vals[(a+b)/2]==x) {
		return (a+b)/2;
	} else if(vals[(a+b)/2]>x) {
		return find(x,a+1,(a+b)/2-1);
	} else {
		return find(x,(a+b)/2+1,b-1);
	}
}
int main() {
	int n,x;
	scanf("%d %d",&n,&x);
	getchar();
	for(int i=0;i<n;i++) {
		scanf("%d",&vals[i]);
	}
	printf("%d",find(x,0,n-1));
}
