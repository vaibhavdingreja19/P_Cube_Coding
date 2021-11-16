#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n,i,j;
 	cin>>n;
 	int a[n],b[n];
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
		if((a[i]%2==0)&&(b[i]%2==0))
		{
			a[i]=a[i]+b[i];
		}
	else if((a[i]%2!=0)&&(b[i]%2!=0))
		{
			a[i]=a[i]*b[i];
		}
		else
		{
			a[i]=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
