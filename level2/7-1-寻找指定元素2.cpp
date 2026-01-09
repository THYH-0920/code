#include <cstdio>
using namespace std;
int vals[100000];
int find(int x,int n) {
	int a=0,b=n-1;
    while(true) {
        if(vals[a]>=x) return a;
        if(vals[b]<x) return n;
        if(vals[(a+b)/2]<x) {
            a=(a+b)/2+1;
        } else {
            a=a+1;
            b=(a+b)/2;
        }
    }
}
int main() {
	int n,x;
	scanf("%d %d",&n,&x);
	getchar();
	for(int i=0;i<n;i++) {
		scanf("%d",&vals[i]);
	} 
	printf("%d",find(x,n));
} 
