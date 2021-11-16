#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n,k=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		if(i%2==0)
		{
			cout<<-k<<"  ";
			k++;
		}
		else
		{
		cout<<k<<" ";
		k++;
		}
}
	cout<<endl;	
}
}
