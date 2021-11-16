#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void leftrotate(string &str1,int d)
{
	reverse(str1.begin(),str1.begin()+d);
	reverse(str1.begin()+d,str1.end());
	reverse(str1.begin(),str1.end());
}
void rightrotate(string &str1,int d)
{
	leftrotate(str1,str1.length()-d);
}
void substring(string &s1,int len,string &str2)
{
	int i,j;
	string str3;
	cout<<s1<<"   "<<str2<<"   "<<len;
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			str3=s1.substr(i,j);
			cout<<str3<<endl;
			if(str2.compare(str3)==0)
			{
				cout<<"Yes";
		
				break;
			}
		}
	}
	
}
int main()
{
	int n,d;
	char a;
	cin>>n;
	string str1,str2;
	cin>>str1;
	string s1;
	s1=str1;
		int len=str1.length();
	for(int i=1;i<=n;i++)
	{
		
		cin>>d;
		cin>>a;

		if(a=='l')
		{
			leftrotate(str1,d);
			cout<<str1<<endl;
		}
		if(a=='r')
		{
			rightrotate(str1,d);
			cout<<str1<<endl;
		}
		str2=str2+str1[0];
	}
	
substring(s1,len,str2);
}
