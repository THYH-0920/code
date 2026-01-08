#include <cstdio>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	int count=0;
	while(n!=1) {
		if(n%2==0) {
			n=n/2;
		} else {
			n+=(n+1)/2;
		}
		count++;
	}
	printf("%d",count);
}
