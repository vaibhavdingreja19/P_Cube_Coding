#include<iostream>
using namespace std;
 int main()
 {
 	int n,i,mean=0,count=0;
 	cin>>n;
 	int a[n];
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
 		mean=mean+a[i];
	}
	mean=mean/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>mean)
		{
			count++;
		}
	}
	cout<<count;
}
