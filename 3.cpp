#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n;
	bool k=1;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			k=1-k;
			cout<<k;
		}			//1-k=000
		cout<<endl;
	}	
}
