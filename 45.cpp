#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,j;
	long double c,d,e;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				c=a[i]*a[i];
				d=a[j]*a[j];
				e=a[k]*a[k];
		if((c+d)==e)
		{
			cout<<a[i]<<a[j]<<a[k]<<endl;
		}
		}
	}

}}
