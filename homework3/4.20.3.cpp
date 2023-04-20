#include <iostream>
#include <stdio.h>
using namespace std;
struct student{
	char a[30];
	double pingshi;
	double qimo;
}; 
int main()
{
	struct student a[100];
	double b[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].a>>a[i].pingshi>>a[i].qimo;
	}
	for(int i1=0;i1<n;i1++)
	{
		b[i1]=0.4*a[i1].pingshi+0.6*a[i1].qimo;
	}
	for(int i3=0;i3<n;i3++)
	{
	printf("%s ",a[i3].a);
	printf("%.2f %.2f %.2f",a[i3].pingshi,a[i3].qimo,b[i3]);
	printf("\n");}
     return 0;
}

