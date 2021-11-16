#include<iostream>
using namespace std;
 int main()
 {
 	int n,i,j,k,count=0,m,temp=0;
 	cin>>n;
 	cin>>m;
 	int a[n],b[m],c[20];
 	
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
	for(j=0;j<m;j++)
 	{
 		cin>>b[j];
	}
			while(i<n&&j<m)
			{
				if((a[i]==b[j])&&(temp!=a[i]))
				{
				c[k]=a[i];
				temp=c[k];
				k++;
				i++;
				j++;
				count++;
			}
			if(a[i]>b[j])
			{
				j++;
			}
			if(b[j]>a[i])
			{
				i++;
			}
			if(temp==a[i])
				i++;
			if(temp == b[j])
				j++;
		}
	for(k=0;k<count;k++)
	{
	cout<<c[k];
	}
}
