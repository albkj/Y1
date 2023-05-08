#include<iostream>
using namespace std;
int IsCancel(int a[],int n,int k){
	int count =0;
	for(int i=0;i<n;i++){
		if(a[i]<=0)
		count++;
	}if(count<k){
		return 0;
	}else{
		return 1;
	}
}
int main(){
	int n=0,k=0,a[1000]={0};
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	int b=IsCancel(a,n,k);
	if(b)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
