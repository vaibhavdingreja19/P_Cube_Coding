#include<iostream>
using namespace std;
int extractmin(int[],int);
bool isfalse(int*,int);
int main()
{
	int v,s,d,e,w;
	cin>>v>>e;
	int G[v][v];
	for(int i=0;i<v;i++)
	{
		cin>>s>>d>>w;
		G[s][d]=w;
		G[d][s]=w;
	}
	int parent[v];
	int key[v];
	int visited[v];
	for(int i=0;i<v;i++)
	{
		key[i]=INT_MAX;
		visited[i]=0;
	}
	key[0]=0;
	
	while(isfalse(visited,v))
	{
		s=extractmin(key,v);
		for(int i=0;i<v;i++)
		{
			if((G[s][i]!=INT_MAX)&&(visited[i]==0))
					{
						if(key[i]>G[s][i])
						{
							key[i]=G[s][i];
							parent[i]=s;
							
						}
					
					}
					
				}
	visited[s]=1;		
		}
	
		
	}
bool isfalse(int *visited,int v)
{
	for(int i=0;i<v;i++)
	{
		if(visited[i]==0)
		{
			return true;
		}
		else
		return false;
	}
}
int extractmin(int key[],int v)
{
	int min=INT_MAX, min_index;
	for(int i=0;i<v;i++)
	{
		if(key[v]<min)
		{
			min=key[v];
			min_index=v;
		}
	}
	return min_index;
}

