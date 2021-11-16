#include<iostream>
using namespace std;
 int main()
 {
 	int n,i,j;
 	cin>>n;
 	int a[n];
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
	for(i=1,j=0;i<=n,j<n;i=i+2,j++)
	{
		if((a[i]>a[j])&&(a[i]>a[i+1]))
		{
			cout<<a[i]<<" ";
		}
	}
}
