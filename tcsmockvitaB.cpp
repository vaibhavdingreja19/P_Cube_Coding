#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i,j,a[n],total=0;
  for(i=0;i<n;i++)
  {
    scanf("%d,",&a[i]);
  }
  sort(a,a+n);
  if(n<2)
  {
  	total=total+a[n-1];
  	n=n-2;
  }
  if(n>=4)
  {
    total=total+a[n-1]*3;
    n=n-3;
   // cout<<endl<<"total is with 3"<<total<<"value of n"<<n;
  }
  else
  {
    total+=a[n-1]*2;
    n=n-2;
    //cout<<endl<<"total is with 2"<<total;
  }
  total=total+a[0];
  //cout<<endl<<"total with zero"<<total;
  while(n>2)
  {
  	//cout<<"while loop";
    total=total+a[n-1]*2;
    n=n-2;
  }
  //cout<<n;
  if(n==2)
  {
  //	cout<<"if loop";
  	total=total+a[n-1];
  }
  cout<<endl<<total;
}
