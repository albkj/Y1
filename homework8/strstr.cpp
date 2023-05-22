#include<iostream>
#include<string.h>
using namespace std;
int mystrstr(char a[],char b[]){
	int la=strlen(a);
	int lb=strlen(b);
	int t=-1;
	for(int i=0;i<la;i++){
		if(a[i]==b[0]){
			for(int j=0;j<lb;j++){
				if(a[i+j]!=b[j])
				break;
				if(j==lb-1){
					t=i;
				}
			}
		}
	}return t;
}
int main(){
	char a[501]={'\0'};
	char b[501]={'\0'};
	scanf("%s",&a);
	scanf("%s",&b);
	int c=mystrstr(a,b);
	cout<<c;
	return 0;
}
