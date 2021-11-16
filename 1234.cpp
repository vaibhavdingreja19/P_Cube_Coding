#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
string line;
getline(cin,line);
//int len = line.length();
vector<string> tokens;
stringstream check1(line);
string intermediate;
while(getline(check1,intermediate,','))
{
	tokens.push_back(intermediate);
}
for(int i=0;i<n;i++)
{
	cout<<tokens[i];
}
}

