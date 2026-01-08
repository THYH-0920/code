#include <cstdio>
using namespace std;
void F(int n,int k=1) {
	for(int i=1;i<k;i++) {
		printf("    ");
	}
	printf("n=%d\n",n);
	if(n<=2) {
		return;
	} else {
		F(n-1,k+1);
		F(n-2,k+1);
	}
}
int main() {
	int n;
	scanf("%d",&n);
	F(n);
}
