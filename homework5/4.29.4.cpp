#include<iostream> 
using namespace std;
int main(){
	char fs[6];
	scanf("%s",&fs);
	int a,b,i=0;
	while(fs[i]!='/'){
		a*=10;
		a+=fs[i]-'0';
		i++;
	}i++;
	while(i<6){
		b*=10;
		b+=fs[i]-'0';
		i++;
	}cout<<"0.";
	for(int j=0;j<200;j++){
		cout<<a*10/b;
		a=(a*10%b);
		if(!a){
			break;
		}
	}return 0;
}
