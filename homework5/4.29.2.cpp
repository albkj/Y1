#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
	int a[100]={0};
	int b[100]={0};
	int m,n,m1,n1;
	scanf("%d %d",&m1,&n1);
	a[m1]=n1;
	while(scanf("%d %d",&m,&n)&&m){
		a[m]=n;
	} 
	a[m]=n;
	int t1,s1;
	scanf("%d %d",&t1,&s1);
	b[t1]=s1;
	while(scanf("%d %d",&m,&n)&&m){
		b[m]=n;
	} 
	b[m]=n; 
	for(int i=max(m1,t1);i>=0;i--){
		if(a[i]+b[i]){
			cout<<a[i]+b[i];
		if(i){
			cout<<"x"<<i<<"+";
		}
		}
	}return 0;
}
