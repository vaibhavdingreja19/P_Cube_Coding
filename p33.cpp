#include <iostream>
using namespace std;

int main() 
	{
	int i,n,a[10];
cin>>n;
for(i=0;i<10;i++)
{
	cin>>a[i];
}
max=a[9];
for(i=9;i>=0;i--)
{
	if(max<a[i])
	{
		max=a[i];
	}
	cout<<max;
}
