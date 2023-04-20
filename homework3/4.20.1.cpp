#include <iostream>
using namespace std;
int main()
{
	int N,i,m,k,j=0;
	int a,b,c,d,e;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>m>>k;
		while(j<k)
		{
			if(m/100==0)
			{
				a=m/10;
				b=m%10;
				if(a==b)
				{
					cout<<m<<endl;
					m++;
					j++;
				}
				else if(a<b)
				{
					a++;
					m=a*10+a;
				}
				else if(a>b)
				{
					b++;
					m=a*10+b;
				}
			 } 
			 else if(m/100!=0&&m/1000==0)
			 {
			 	 a=m/100;
			 	 b=(m-a*100)/10;
			 	 c=m%10;
			 	 if(a==c)
			 	 {
			 	 	cout<<m<<endl;
			 	 	m++;
			 	 	j++;
				  }
				  else 
				  {
				  	m++;
				  }
			 }
			 else if(m/1000!=0&&m/10000==0)
			 {
			 	a=m/1000;
			 	b=(m-a*1000)/100;
			 	c=(m-a*1000-b*100)/10;
			 	d=m%10;
			 	if(a==d&&b==c)
			 	{
			 		cout<<m<<endl;
			 		m++;
			 		j++;
				 }
				 else {
				 	m++;
				 }
			 }
			 else if(m/10000!=0&&m/100000==0)
			 {
			 	a=m/10000;
			 	b=(m-a*10000)/1000;
			 	c=(m-a*10000-b*1000)/100;
			 	d=(m-a*10000-b*1000-c*100)/10;
			 	e=m%10;
			 	if(a==e&&b==d)
			 	{
			 		cout<<m<<endl;
			 		m++;
			 		j++;
				 }
				 else
				 {
				 	m++;
				 }
			 }
			
		}
	}
	return 0;
}
