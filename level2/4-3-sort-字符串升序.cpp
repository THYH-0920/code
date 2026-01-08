#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	string _s,s[10];
	for(int i=0;i<n;i++) {
		cin>>_s;
		s[i]=_s;
	}
	sort(s,s+n);
	for(int i=0;i<n;i++) {
		cout<<s[i]<<"\n";
	}
}
