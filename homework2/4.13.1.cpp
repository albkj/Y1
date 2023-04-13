#include<iostream>
using namespace std;
int main(){
	int N,n,a[10]={0},b[10]={0};
	cin>>N>>n;
	for(int i=0;i<N;i++){
	for(int j=0;j<n;j++){
		b[0]=1;
		b[j+1]=1;
		a[0]=1;
		a[j+1]=1;
		for(int t=1;t<j-1;t++){
		a[t]=b[t]+b[t-1];
		}for(int m=0;m<j;m++){
			cout<<a[m];
			b[m]=a[m];
		}cout<<endl;
	}
		
	}return 0;
}

