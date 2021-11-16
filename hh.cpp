#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,a[n],total=0;
	for(i=0;i<n;i++)
	{
		scanf("%d,",&a[i]);
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	if(n>=4)
	{
		total=total+a[n-1]*3;
		n=n-2;
	}
	cout<<total<<endl;
total=total+a[0];
cout<<total<<endl;
while(n>2)
{
	total=total+a[n]*2;
	n=n-2;
}
if(n<2)
{
	total=total+a[1];
}
	cout<<endl<<total;
}
	
