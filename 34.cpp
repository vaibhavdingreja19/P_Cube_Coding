#include<iostream>
using namespace std;
 int main()
 {
 	int n,i,r1,r2,count=0;
 	cin>>n;
 	int a[n];
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
	cin>>r1>>r2;
	for(i=0;i<n;i++)
	{
		if((a[i]>=r1)&&(a[i]<=r2))
		{
			count++;
		}
	}
	cout<<count;
}
