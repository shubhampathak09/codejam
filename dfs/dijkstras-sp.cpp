// ? dijkstras
#include<bits/stdc++.h>
using namespace std;

#define INF 1e7


void solve()
{
	
	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>>g(n+1);
	vector<int>parent(n+1);
	vector<int>dist(n+1);
 
   for(int i=1;i<=n;i++)
   {
   	dist[i]=INF;
   	parent[i]=-1;
	   }	
	
	for(int i=0;i<m;i++)
{
	int a,b,w;
	cin>>a>>b>>w;
	g[a].push_back({b,w});
	g[b].push_back({a,w});
	}
	
	int src=1;
	dist[src]=0;
	parent[src]=-1;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({src,dist[src]});
	
	while(!pq.empty())
	{
	 	
	 pair<int,int>p=pq.top();
	 pq.pop();
	 
	for(auto x: g[p.first])
	{
		if(dist[x.first]>x.second+dist[p.first])
		{
			dist[x.first]=dist[p.first]+x.second;
			parent[x.first]=p.first;
			pq.push({x.first,dist[x.first]});
		}
		}	
		
	
	}
	
	//for(int i=1;i<=n;i++)
	//cout<<parent[i];
	
		stack<int>s;
		int i=n;
	//	s.push(i);
		while(i!=-1)
		  { 
		     
		    s.push(i);
		    i=parent[i];
			
		
			
		}
		while(!s.empty())
		{
			cout<<s.top();
			s.pop();
		}
	
	
	
}

int main()
{
	
	solve();
	
}

