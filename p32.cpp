#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int i,j,n,k,m;
	cin>>n;
	cin>>m;
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
		{
			cout<<" ";
		}
		for(j=0;j<m;j++)
		{ 
		if((i==0)||(i==(n-1)))
			cout<<"*";
		}
		if((i>0)||(i<(n-1)))
		{
			cout<<"*";
			for(j=0;j<m-2;j++)
			{
				cout<<" ";
			}
			for(k=0;k<)
		}
		cout<<endl;
	}
}
		
