#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int n,val;
	scanf("%d",&n);
	getchar();
	int a[10];
	for(int i=0;i<n;i++) {
		scanf("%d",&val);
		a[i]=val;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++) {
		if(i!=0) printf(" ");
		printf("%d",a[i]);
	}
}
