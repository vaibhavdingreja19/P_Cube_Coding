#include<iostream>
#include<math.h>
using namespace std;
int f(int,int,int);
int recwrap(int,int);
int main()
{
	int money,prize,wrap;
	cin>>money>>prize>>wrap;
	cout<<f(money,prize,wrap);
}
int f(int money,int prize,int wrap)
{
	int noofchoc=money/prize;
	return noofchoc+recwrap(noofchoc,wrap);
}
int recwrap(int noofchoc,int wrap)
{
	if(noofchoc<wrap)
	return 0;
	int newno=noofchoc/wrap;
	return newno+recwrap(newno+noofchoc%wrap,wrap);
}

