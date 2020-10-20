
#include<bits/stdc++.h>
using namespace std;


void dijk()
{
	int n;
	cin>>n;
	int graph[n][n];
	
	vector<vector<pair<int,int>>>g(n);
	vector<int>dist(n);
	
	for(int i=0;i<n;i++)
	dist[i]=INT_MAX;
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>graph[i][j];
			if(graph[i][j]!=0)
			{
				g[i].push_back({j,graph[i][j]});
				g[j].push_back({i,graph[i][j]});
			}
		}
	}
	
	int src,dest;
	cin>>src>>dest;
	
	dist[src]=0;
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({0,src});
	
	while(!pq.empty())
	{
		pair<int,int>u=pq.top();
		pq.pop();
		for(auto x:g[u.second])
		{
			if(dist[x.first]>dist[u.second]+x.second)
			{
				//cout<<1;
				dist[x.first]=dist[u.second]+x.second;
			}
		}
	}
	
	for(int i=0;i<4;i++)
	cout<<dist[i]<<"\t";
}

int main()
{
	
	
	dijk();
	
	
}
