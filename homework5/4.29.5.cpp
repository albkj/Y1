#include<iostream> 
using namespace std;
int even(int n){
	if(n%2){
		return 0;
	}else{
		return 1;
	}
}
int main(){
	int n,sum=0;
	while(scanf("%d",&n)&&n>0){
		if(!even(n)){
			sum+=n;
		}
	}cout<<sum;
	return 0;
}
