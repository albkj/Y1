#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
void hanoi(char a,char b,char c,int n){
	int i=1;
    if (n==1) {
	cout<<" Step"<<i<<":Move Disk"<<n<<" from "<<a<<" to "<<c<<endl;  
	i++;}
    else {
        hanoi(a,c,b,n-1);
        cout<<" Step"<<i<<":Move Disk"<<n<<"from "<<a<<" to "<<c<<endl;
		i++;
        hanoi(b,a,c,n-1);
    }
}
int main(){
    int n;
    cin>>n;
    hanoi('A','B','C',n);
}
