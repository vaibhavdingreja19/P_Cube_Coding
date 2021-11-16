#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int parent[100];
int main()
{
	vector<pair<int pair<int,int> > > G, R;
	int i,v,e,s,d,w;
	cin>>v>>e;
	for(i=0;i<v;i++)
	{
		parent[i]=0;
	}
	for(i=0;i<e;i++)
	{
		cin>>s>>d>>w;
	
	G.push_back(make_pair(w,make_pair(s,d)));
	}
sort(G.begin(),G.end());
for(i=0;i<e;i++)
{
	w=G[i].first;
	s=G[i].second.first;
	d=G[i].second.second;
	if(find(s)!=find(d))
	{
		R.push_back(G[i]);
		unite(s,d);
	}
}
printSol();
}
int find(int k)
{
	if(parent[k]==k)
	{
		return k;
	}
	return find(parent[k]);
}
void unite(int s,int d)
{
	int x=find(s);
	int y=find(d);
	if(x>y)
	{
		parent[y]=x;
	}
	else
	parent[x]=y;
}
