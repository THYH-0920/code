#include <cstdio>
#include <algorithm>
using namespace std;
struct Node {
	int x,y;
	Node(){}
	Node(int _x,int _y){
		x=_x;
		y=_y; 
	}
};
bool cmp(const Node& a,const Node& b) {
	if(a.x!=b.x) return a.x<b.x;
	return a.y<b.y;
}
int main() {
	int n,x,y;
	scanf("%d",&n);
	Node a[10];
	for(int i=0;i<n;i++) {
		getchar();
		scanf("%d %d",&x,&y);
		a[i]=Node(x,y);
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) {
		printf("%d %d\n",a[i].x,a[i].y);
	}
} 
