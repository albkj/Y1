#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int k=0,t=0;
	char s[100],str[100];
	scanf("%s",&s);
	cin>>k;
	int l=strlen(s);
	for(int j=0;j<l;j++){
		if(s[j]=='-'){
			for(int m=j;s[m]!='\0';m++){
				s[m]=s[m+1];
			}	
		}if(s[j]>='a'&&s[j]<='z'){
				s[j]=s[j]-'a'+'A';
			}
	}l=strlen(s);
	for(int i=l;i>0;i--){
		if(t==k){
			for(int m=strlen(s);m>=i;m--){
				s[m+1]=s[m];
			}s[i]='-';
			t=0;	
		}t++;
	}printf("%s",s);
	return 0;
}
