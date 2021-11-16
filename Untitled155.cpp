#include<bits/stdc++.h>
#include<vector>
#include<iostream>

using namespace std;
bool compare(pair<double,pair<int,int> >a,pair<double,pair<int,int> >b)
{
	return a.first>b.first;
	
}

int main()
{
	int n,k,v,w;
	cin>>n;
	vector<pair<double,pair<int,int> >item;
	for(int i=0;i<n;i++)
	{
		cin>>v>>w;
		item.push_back(make_pair (double) v/w, make_pair(v,w));
	}
	sort(item.begin,item.end,compare);
	cin>>k;
	double profit=0.0;
	double r=0.0;
	for(int i=0;i<n;i++)
	{
		if(k<=0)
		{
			break;
		}
		while(k>0)
		{
			v=item[i].second.first;
			w=item[i].second.second;
			r=item[i].first;
			if(w<=k)
			{
				profit=profit+w;
				k=k-w;
			}
			else
			{
				profit=profit+(k*r);
				k=k-r*w;
			}
		}
	}
		cout<<"profit is:"<<profit;
		return 0;
	
}

