#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n,i,j,temp=0;
 	cin>>n;
 	int a[n],b[n],c[n];
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
	for(i=0,j=i+i;i<n,j<n;i++,j++)
	{
		if(a[j]<0)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}

 	for(i=0;i<n;i++)
 	{
 		cout<<a[i]<<"  ";
	}
}
