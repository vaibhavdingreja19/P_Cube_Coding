#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n,sum=0,ke=0,ko=0;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
		ke=sum;
		for(j=0;j<i;j++)
		{
			ko++;
		if(j%2==0)
		{
			cout<<ke--;
		}
		else
		{
		cout<<ko;
	}
}
	cout<<endl;	
}
}
