#include<bits/stdc++.h>
using namespace std;

// fill time of graphs

void dfsutil(int source,vector<int>adj[],bool*visited,stack<int>s)
{
	
	visited[source]=true;
	
	vector<int>::iterator it;
	for(it=adj[source].begin();it!=adj[source].end();++it)
	{
		if(visited[*it]==false)
		dfsutil(*it,adj,visited,s);
	}
	s.push(source);
}

void dfs(vector<int>adj[],int v)
{
	
	//cout<<1;
	bool *visited;
	stack<int>s;
	for(int i=0;i<v;i++)
	visited[i]=false;
	
	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
		dfsutil(i,adj,visited,s);
	}
	
	while(!s.empty())
    {
    	cout<<s.top();
    	s.pop();
	}
	
}

int main()
{
	
	int V=5;
	vector<int>adj[V];
	int e=5;
	
	
	for(int i=0;i<e;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	
	dfs(adj,V);
}
