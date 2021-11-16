#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	int n;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<k;
			k++;
		}
		cout<<endl;
	}
	
}
