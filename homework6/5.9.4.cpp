#include<iostream>
using namespace std;
int sort (int num[],int n){
        for(int i=0;i<n;i++){
        	for(int j=i;j<n;j++){
        		if(num[i]>num[j]){
        			int t=num[i];
        			num[i]=num[j];
        			num[j]=t;
				}
			}
		}return 0;
}
int main(){
	int  num[100]={0},n=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	} 
	int a=sort(num,n);
	for(int i=0;i<n;i++){
		cout<<num[i]<<" ";
	} return 0;
}
