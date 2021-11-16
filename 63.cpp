#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,m,max=0;
	cin>>m>>n;
	int i,j;
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		max=a[i][0];
		for(j=0;j<n;j++)
		{
			if(max>a[i][j])
			max=a[i][j];
		}
		cout<<max<<" ";
	}
	cout<<endl;
	max=0;
	for(i=0;i<m;i++)
	{
		max=a[0][j];
		for(j=0;j<n;j++)
		{
			if(max>a[j][i])
			max=a[j][i];
		}
		cout<<max<<" ";
	}
}
	
