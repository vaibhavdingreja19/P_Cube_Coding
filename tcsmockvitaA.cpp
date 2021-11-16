#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n);
int nCr(int n,int r)
{
  return fact(n)/(fact(r)*fact(n-r));
}
int fact(int n)
{
  int res=1;
  for(int i=2;i<=n;i++)
  {
    res=res*i;
  }
  return res;
}
int main()
{
  int x,y,z,s,m,c,sum1,sum2,sum3,s1=0,s2=0,s3=0,s4=0,s5=0;
  long int sum,result1=0;
  char a,b,f;
  cin>>x;
  cin>>s;
  cin>>y;
  cin>>m;
  cin>>z;
  cin>>c;
  cin>>a>>b;
  cin>>f;
  if(((s+m+c)>=1)&&((s+m+c)<=26)&&(s>=1)&&(m>=1)&&(c>=1))
  {
   sum1=nCr(x,s);
   sum2=nCr(y,m);
   sum3=nCr(z,c); 
   sum=sum1*sum2*sum3;
  }
  cout<<endl<<sum<<endl;
  s3=x+y+z;
  s4=s+m+c;
  s1=nCr(s3,s4);
  s2=nCr(s3-2,s4-2);
  s5=nCr(2,1);
  result1=(s1-(s2*s5))/2;
  cout<<result1;
}
