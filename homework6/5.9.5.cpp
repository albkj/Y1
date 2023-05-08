#include<iostream>
using namespace std;
int main(){
	char a[10000]={'\0'},b[10000]={'\0'};
	int p=0;
	cin.getline(a, 10000);
	cin.getline(b, 10000);
	for(int i=0;a[i]!='\0';i++){
		int t=i;
		if(a[i]==b[0]){
			for(int j=1;b[j]!='\0';j++){
				t++;
				if(b[j]!=a[t]){
					break;
				}if(b[j+1]=='\0'){
					cout<<i<<" ";
					p=1;
				}
			}
		}
	}if(!p){
		cout<<"-1";
	}
	return 0; 
}
