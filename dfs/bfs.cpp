
#include<bits/stdc++.h>
using namespace std;

#define INF  1e9+7

void bfs(int u,vector<int>*adj,bool visited[],int dist[],int d)
{
	dist[u]=0;
	visited[u]=true;
	
	queue<int>q;
	q.push(u);
	while(!q.empty())
	{
		int u=q.front();
		//visited[u]=true;
		cout<<u<<" ";
		q.pop();
		for(auto x:adj[u])
		{
			if(visited[x]==false)
			{
				visited[x]=true;
				dist[x]=dist[u]+1;
				q.push(x);
			}
		}
	}
	
	cout<<"......"<<endl;
	if(dist[d]==INF)
	cout<<"distance to d does not exist";
	else
	cout<<dist[d];
}


int main()
{
	int v,e;
	cin>>v>>e;
	
	vector<int>g[v];
	int dist[v];
	for(int i=0;i<v;i++)
	dist[i]=INF;
	
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		
	}
	
	bool visited[v];
	for(int i=0;i<v;i++)
	visited[i]=false;
	
	bfs(0,g,visited,dist,2);
	
}
