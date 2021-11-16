#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,j,count=0,b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n;j++)
	{
		cin>>b[j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(pow(a[i],b[j])>pow(b[j],a[i]))
			{
				count++;
			}
		}
	}
	cout<<count;
}
