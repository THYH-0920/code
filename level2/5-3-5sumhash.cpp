#include <cstdio>
using namespace std;
int sumhash[500]={0};
void sethash(int a) {
	sumhash[a+250]+=1;
}
int gethash(int a) {
	return sumhash[a+250];
}
int numA[100];
int numB[100];
int numC[100];
int numD[100];
int numE[100];
int na=0,nb=0,nc=0,nd=0,ne=0;

int main() {
	scanf("%d %d %d %d %d",&na,&nb,&nc,&nd,&ne);
	int temp;
	getchar();
	for(int i=0;i<na;i++) {
		scanf("%d",&temp);
		numA[i]=temp;
	}
	getchar();
	for(int i=0;i<nb;i++) {
		scanf("%d",&temp);
		numB[i]=temp;
	}
	getchar();
	for(int i=0;i<nc;i++) {
		scanf("%d",&temp);
		numC[i]=temp;
	}
	getchar();
	for(int i=0;i<nd;i++) {
		scanf("%d",&temp);
		numD[i]=temp;
	}
	getchar();
	for(int i=0;i<ne;i++) {
		scanf("%d",&temp);
		numE[i]=temp;
	}
	for(int i=0;i<na;i++) {
		for(int j=0;j<nb;j++) {
			sethash(numA[i]+numB[j]);
		}
	}
	long long count=0;
	for(int i=0;i<nc;i++) {
		for(int j=0;j<nd;j++) {
			for(int k=0;k<ne;k++) {
				int numsum=-(numC[i]+numD[j]+numE[k]);
				if(numsum+250<500&&numsum+250>=0) {
					count+=gethash(numsum);
				}
			}
		}
	}
	printf("%lld",count);
}
