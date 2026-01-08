#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	string res="";
	int count=0;
	while(cin>>s) {
		if(count!=0) res=" "+res;
		res=s+res;
		count++;
	}
	cout<<res;
}
