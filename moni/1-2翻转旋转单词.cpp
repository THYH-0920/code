#include <cstdio>
using namespace std;
char s1[51];
char s2[51];
int main() {
	char input;
	int count=0; 
	int flag1=1;
	int flag2=1;
	while(scanf("%c",&input)!=EOF) {
//		printf("1\n");
		if(input=='B'||input=='C'||input=='D'|| 
		input=='E'||input=='H'||input=='I'|| 
		input=='K'||input=='O'||input=='X') {
			s1[count]=input;
		} else {
			flag1=0;
			s1[count]='?';
		}
		if(input=='H'||input=='I'||input=='N'|| 
		input=='O'||input=='S'||input=='X'|| 
		input=='Z') {
			s2[count]=input;
		} else {
			flag2=0;
			s2[count]='?';
		}
		count++;
	}
	char mid;
	int flag3=1;
	for(int i=0;i<count/2;i++){
		if(s2[count-1-i]!=s2[i]) flag3=0;
		mid=s2[count-1-i];
		s2[count-1-i]=s2[i];
		s2[i]=mid;
	}
	s1[count]='\0';
	s2[count]='\0';
	printf("%s %d\n",s1,flag1);
	printf("%s %d",s2,flag2&flag3);
}
