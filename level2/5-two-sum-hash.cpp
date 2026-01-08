#include <cstdio>
using namespace std;
bool valshash[1000000]={false};
int vals[100000];
int main() {
	int n,k,val;
	scanf("%d %d",&n,&k);
	getchar();
	for(int i=0;i<n;i++) {
		scanf("%d",&val);
		valshash[val]=true;
		vals[i]=val;
	}
	int count=0;
	for(int i=0;i<n;i++) {
		if(2*vals[i]>=k) break;
		if(valshash[k-vals[i]]) count++;
	}
	printf("%d",count);
}
