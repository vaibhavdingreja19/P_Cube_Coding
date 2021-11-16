#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 int main()
 {
 	int n,i,j,sum=0;
 	cin>>n;
 	bool a[n],b[n],c[n];
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
		c[i]=a[i]-b[i];
	}
 	for(i=0;i<n;i++)
 	{
 		cout<<c[i]<<" ";
	}
	for(i=n-1;i>=0;i--)
	{
		sum=c[i]*pow(2,i);
	}
	}	
