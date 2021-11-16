#include<stdio.h>
int main()
{
	int v,e,d,s,w;
	scanf("%d%d",&v,&e);
	int G[v][v];
	for(int i=0;i<e;i++)
	{
		scanf("%d%d%d",&s,&d,&w);
		G[s][d]=w;
		G[d][s]=w;
	}
	int parent[v],key[v];
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		key[i]=-1;
		visited[i]=false;
	}
	key[0]=0;
	parent[0]=-1;
	for(int count=0;count<v-1;count++)
	{
		int s=minkey(key,visited,v);
		visited[s]=true;
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
	}
	printsol(parent,v,G);
}
int printsol(int parent[],int n, int G[n][n])
{
	printf("edge \t weight");
	for(int i=0;i<n;i++)
	{
		printf("%d -%d\t %d \n",parent[i],i,G[i][parent[i]]);
	}
}


