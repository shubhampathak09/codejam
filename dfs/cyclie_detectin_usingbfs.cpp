
// cycle detecting using bfs
#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
	}


bool iscyclicutil(vector<int>*adj,bool*visited,int src,int n)
{
	
	vector<int>parent(n);
	for(int i=0;i<n;i++)
	parent[i]=-1;
	
	queue<int>q;
	visited[src]=1;
	while(!q.empty())
	{
		
		int u=q.front();
		q.pop();
		
		for(auto x:adj[u])
		{
			if(visited[x]==false)
			{
				q.push(x);
				parent[x]=u;
			}
			else if(visited[x]==true&&parent[x]!=-1)
			return true;
		}
		
	//	return false;
	}
	
	return false;
}


bool iscycle(int V,vector<int>*adj)


{
	
bool visited[V];
for(int i=0;i<V;i++)
visited[i]=false;

for(int i=0;i<V;i++)
{
	if(iscyclicutil(adj,visited,i,V)&&visited[i]==false)
	return true;
	
}
	return false;
	
}

int main()
{
	
	int V=4;
	vector<int>adj[V];
	addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,2,0);
	addedge(adj,2,3);
	
	if(iscycle(V,adj))
	cout<<true;
	else
	cout<<false;
	
}
