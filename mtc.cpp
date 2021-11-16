#include<iostream>
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
int main()
{
	int n,d;
	char a;
	cin>>n;
	string str1;
	getline(cin,str1);
	while(n)
	{
		cin>>d;
		cin>>a;

		if(a=='l')
		{
			leftrotate(str1,d);
			cout<<str1;
		}
		if(a=='r')
		{
			rightrotate(str1,d);
			cout<<str1;
		}
		n--;
	}
}
