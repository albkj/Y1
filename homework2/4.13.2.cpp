#include<iostream>
using namespace std;
int main(){
	int n,a[5]={0},i=0;
	cin>>n;
	do{
		a[i]=n%8;
		n/=8;
		i++;
	}while(n/8!=0);
	a[i]=n%8;
	for(int j=4;j>=0;j--){
		cout<<a[j];
	}return 0;
}

