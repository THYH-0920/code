#include <iostream>
#include <string>
using namespace std;
int strhash[26*26*26]={0};
int strnum(const string& str) {
	return (str[0]-'A')+
	(str[1]-'A')*26+
	(str[2]-'A')*26*26;
}
int main() {
	int n,m;
	string str;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>str;
		strhash[strnum(str)]+=1;
	}
	cin>>m;
	for(int i=0;i<m;i++) {
		if(i!=0) cout<<" ";
		cin>>str;
		cout<<strhash[strnum(str)];
	}
}
