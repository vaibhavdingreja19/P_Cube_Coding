#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,m,max=0,ind=0;
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
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[j][i];
		}
		if(sum>max)
		{
			cout<<sum<<" " <<max<<" "<<j<<endl;
			max=sum;
			ind=i+1;
			cout<<ind<<endl;
		}

	}
	cout<<ind;
}
