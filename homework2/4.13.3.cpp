#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	int a,b;
	cin>>a>>b;
		int c[1000]={0},m=0;
	do{
		c[m]=a%b;
		a/=b;
		m++;
	}while(a/b!=0);
	c[m]=a%b;
	while(m+1){
		cout<<c[m];
		m--;
	}}
	return 0;
}

