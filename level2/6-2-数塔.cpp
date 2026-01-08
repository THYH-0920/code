#include <cstdio>
using namespace std;
int num[20][20];
void fadd(int n) {
	if(n==-1) return;
	for(int i=0;i<n+1;i++) {
		int max=(num[n+1][i]>num[n+1][i+1]?num[n+1][i]:num[n+1][i+1]);
		num[n][i]+=max;
	}
	fadd(n-1);
}
int main() {
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++) {
			scanf("%d",&num[i][j]);
		}
		if(i!=n-1) getchar();
	}
	fadd(n-2);
	printf("%d",num[0][0]);
}
