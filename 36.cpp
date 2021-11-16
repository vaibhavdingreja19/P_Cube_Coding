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
	sort(a,a+n);
	sort(b,b+n);

	for(i=0,j=0;i<n,j<;)
	{
			if(a[i]==a[j])
			{
				i++;
				j++;
			}
			if(a[i]<a[j])
			{
				i++;
			}
			if(a[i]>a[j])
			{
				j++;
			}
				
	
