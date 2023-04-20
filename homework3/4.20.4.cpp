#include<iostream> 
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f; 
		float average=(a+b+c+d+e+f)/6;
		float fc=sqrt(((a-average)*(a-average)+(b-average)*(b-average)+(c-average)*(c-average)
		+(d-average)*(d-average)+(e-average)*(e-average)+(f-average)*(f-average))/6);
		printf("%.2f %.2f",average,fc);
	}
}

