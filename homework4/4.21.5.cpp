#include<iostream> 
using namespace std;
int main(){
	int BJT,UTC;
	cin>>BJT;
	if(BJT<=2359&&BJT>=0){
		if(BJT/100){
			UTC=BJT-800;
			if(UTC<0)
			UTC+=2400;
		}else{
			UTC+=1600;
		}cout<<UTC;
	}
}

