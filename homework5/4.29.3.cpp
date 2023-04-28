#include<iostream> 
using namespace std;
int gys(int a,int b){
	int t;
      while(b%a){
      	t=b-a;
      	b=a;
      	a=t;
	  }return a;
}
int gbs(int a,int b){
	int c=gys(a,b);
	return a*b/c; 
}
int main(){
	int a,b,t;
	cin>>a>>b;
	if(a>b){
		a=t;
		a=b;
		b=t;
	}
	cout<<gys(a,b)<<" "<<gbs(a,b);
	return 0;
}
