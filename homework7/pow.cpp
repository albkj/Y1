#include<iostream>
#include<string.h>
using namespace std;
int pow(int x,int n){
	int sum=1;
	for(int i=0;i<n;i++){
		sum*=x; 
	}return sum;
}
int main(){
	int x=0,n=0;
	char c[100];
	scanf("%s",&c);
	int l=strlen(c);
	for(int i=0;i<l;i++){
		if(c[i]>='0'&&c[i]<='9'){
			x*=10;
			x+=c[i]-'0';
		}else if(c[i]==','){
			for(int j=i+1;j<l;j++){
		if(c[j]>='0'&&c[j]<='9'){
			n*=10;
			n+=c[j]-'0';
		}
		}	break;
		}
	}cout<<pow(x,n);
	return 0;
}
