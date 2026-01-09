#include <cstdio>
using namespace std;
void f(int n) {
	if(n==0) {
		printf("我的小鲤鱼"); 
	} else {
		printf("抱着");
		f(n-1);
		printf("的我");
	}
}
int main() {
	int n;
	scanf("%d",&n);
	printf("吓得我抱起了");
	f(n); 
} 
