#include<iostream>
using namespace std;
int main()
{
	int n,flag=0,sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
	cin>>n;
	int i,j,a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
		for(j=0;j<n;j++)
		{
			sum=sum+a[0][j];
		}
		cout<<sum<<endl;
	for(i=1;i<n;i++)
	{
		sum1=0;
		for(j=0;j<n;j++)
		{
			sum1=sum1+a[i][j];
		}
		cout<<sum1<<"row"<<endl;
		if(sum1!=sum)
		{
			flag=1;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		sum2=0;
		for(j=0;j<n;j++)
		{
			sum2=sum2+a[j][i];
			if(i==j)
			{
				sum3=sum3+a[i][j];
				cout<<sum3<<endl;
			}
			if((i+j)==(n-1))
			{
				sum4=sum4+a[i][j];
				cout<<sum4<<endl;
			}
		}
		cout<<sum2<<"cols"<<endl;
		cout<<sum3<<" "<<"diagnol1"<<endl;
		cout<<sum4<<" "<<"diagnol2"<<endl;
		if(sum2!=sum)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"magic matrix";
	}
	if(flag==1)
	{
		cout<<"not a magic matrix";
	}
}
