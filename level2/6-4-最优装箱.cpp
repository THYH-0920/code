#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int n,w,ws[100000];
	scanf("%d %d",&n,&w);
	getchar();
	for(int i=0;i<n;i++) {
		scanf("%d",&ws[i]);
	}
	sort(ws,ws+n);
	int cw=0,cnt=0;
	for(;cnt<n;cnt++){
		if(cw+ws[cnt]<=w){
			cw+=ws[cnt];
		} else {
			break;
		}
	}
	printf("%d %d",cnt,cw);
}
