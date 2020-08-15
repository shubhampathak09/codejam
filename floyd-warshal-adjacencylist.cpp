// floyd warshall on adjacency List impl

#include<bits/stdc++.h>
using namespace std;

#define INF 10000007

void solve()
{
	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>>g(n+1);
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		g[a].push_back({b,w});
	    g[b].push_back({a,INF});			
	}
	int dist[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;g[i].size();j++)
		{
			
			dist[i][j]=g[i][j].second;
			cout<<dist[i][j]<<"\t";
		}
	}
	
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(dist[i][k]<INF&&dist[k][j]<INF)
				{
					dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
				}
			}
		}
	}
//	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<dist[i][j]<<"\t";
//		}
//		cout<<"\n";
//	}
}
int main ()
{
	
	
	solve();
	
}
