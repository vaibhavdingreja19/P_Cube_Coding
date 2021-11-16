#include<bits/stdc++.h>
using namespace std;
#define max 99999
int main()
{
	int v,e,s,d,w,vs,i,j,k;
	cin>>v>>e;
	int g[v][v];
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			g[i][j]=max;
		}
	}
	for(i=0;i<e;i++)
	{
		cin>>s>>d>>w;
		g[s][d]=w;
		g[d][s]=w;
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			if(g[i][j]==max)
			printf("INF\t\t");
			else
			printf("%d\t\t",g[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			for(k=0;k<v;k++)
			{
				if(g[i][k]!=max && g[k][j]!=max)
				{
					if(g[i][j]>g[i][k]+g[k][j])
					{
						g[i][j]=g[i][k]+g[k][j];
					}
				}
			}
		}
	}
	printf("expected matrix\n");
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("%d\t\t",g[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
