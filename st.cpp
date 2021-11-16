#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0,c;
	cin>>n;
	int a[20];
for(i=0;i<n;i++)
{
	scanf("%d,",&a[i]);
	if(i>n)
	break;
}
for(i=3;i<n;i++)
{
	cout<<a[i];
}
	
}
