#include<iostream>
using namespace std;
int main(){
	char s[8]={'\0'};
	scanf("%s",&s);
	for(int i=0;i<7;i++){
		if(s[i]>='A'&&s[i]<='C'){
			cout<<"2";
		}if(s[i]>='D'&&s[i]<='F'){
			cout<<"3";
		}if(s[i]>='G'&&s[i]<='I'){
			cout<<"4";
		}if(s[i]>='J'&&s[i]<='L'){
			cout<<"5";
		}if(s[i]>='M'&&s[i]<='O'){
			cout<<"6";
		}if(s[i]>='P'&&s[i]<='S'){
			cout<<"7";
		}if(s[i]>='T'&&s[i]<='V'){
			cout<<"8";
		}if(s[i]>='W'&&s[i]<='Z'){
			cout<<"9";
		}
	}return 0;
}
