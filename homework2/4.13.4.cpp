#include<iostream>
using namespace std;
int main(){
	char date[10];
	scanf("%s",&date);
	char week[7][10]{"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int year,month,day=0;
	for(int i=0;i<4;i++){
		year+=date[i]-'0';
		year*=10;
	}for(int i=5;i<7;i++){
		month+=date[i]-'0';
		month*=10;
	}for(int i=8;i<10;i++){
		day+=date[0]-'0';
		day*=10;
	}int a=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
	printf("%s",&week[a][10]);
}

