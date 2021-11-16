#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	int a[n][n],i,j,b[n][n];
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			cin>>a[i][j];
		 }
	 }
	  	for(i=0;i<n;i++)
 		{
 			for(j=0;j<n;j++)
 			{
 				b[i][j]=a[j][i];
 			}
 		}
 		cout<<endl<<endl<<endl;
 		
 		 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	 	cout<<endl<<endl<<endl;
  	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			cout<<b[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }
