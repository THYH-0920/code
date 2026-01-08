#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main() {
	int n,val,a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&val);
		a[i]=val;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) {
		if(i!=0) printf(" "); 
		printf("%d",a[i]);
	}
} 
