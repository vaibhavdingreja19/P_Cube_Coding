#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n,i,j,flag=0;
 	cin>>n;
 	int a[n],b[n],c[n];
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		if(a[i]!=a[j])
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"not pallindrome";
	}
	else{
		cout<<"pallindrome";
	}
	}
