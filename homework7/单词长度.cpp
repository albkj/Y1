#include<iostream>
using namespace std;
int main(){
	char c;
	int count=0,b=0;
	int a[1000]={0};
	while((	c=cin.get())!='.'){
		
		if(c!=' '){
			count++;
		}else{
			a[b]=count;
			b++;
			count=0;
		}
	}a[b]=count;
	for(int i=0;a[i]!=0;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
