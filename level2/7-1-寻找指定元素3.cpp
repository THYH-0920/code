#include <cstdio>
using namespace std;
int vals[100000];
int find(int x,int n) {
	int a=0,b=n-1;
	while(true) {
		if(vals[a]>x) return a;
		if(vals[b]<=x) return n;
		if(vals[(a+b)/2]>x) {
			b=(a+b)/2;
			a=a+1;
		} else {
			a=(a+b)/2+1;
		}
	}
}
int main() {
	int n,x;
	scanf("%d %d",&n,&x);
	for(int i=0;i<n;i++) {
		scanf("%d",&vals[i]);
	}
	printf("%d",find(x,n));
}
