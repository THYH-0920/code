#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
struct Student{
	int num;
	int index;
	Student(int _index, int _scole):index{_index},num{abs(_scole-83)}{}
	bool operator<(const Student& other) const {
		if(num==other.num) return index<other.index?false:true;
		return num<other.num?false:true;
	}
};
int main() {
	priority_queue<Student> q;
	int n,scole;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++) {
		scanf("%d",&scole);
		q.push(Student(i+1,scole));
	}
	printf("%d",q.top().index);
}
