//Kosarajus Algorith to fins SCC

// first do a dfs-1 and push those vertices in stack that finsish first in recursive dfs call

// create a transpose graph by reversing the edges

// do a dfs-2 on based on first element of stack.. complete and print the vertices individually for vertices in stack
// this would give a scc

#include<bits/stdc++.h>
using namespace std;

void dfs_1(int source,vector<int>adj[],stack<int>s,vector<bool>visited)
{
	
	cout<<source<<"\t";
	
	visited[source]=true;
	for(auto x:adj[source])
	{
		if(!visited[x])
		dfs_1(x,adj,s,visited);
		
	}
	s.push(source);
}

void dfsutil(int s,vector<int>*adj,vector<bool>visited)
{
	
	visited[s]=true;
	cout<<s<<" ";
	for(auto x:adj[s])
	{
		if(!visited[x])
		dfsutil(x,adj,visited);
	}
	
}

void kosaraju(vector<int>*adj,stack<int>s,vector<bool>visited)
{
	//cout<<1;
	while(!s.empty())
{
	
	int element=s.top();
	s.pop();
	dfsutil(element,adj,visited);
	cout<<endl;
}
}

int main()
{
	int v,e;
	
	cin>>v>>e;
	// v=5, e=5
//	cin>>v>>e;
	vector<int>adj[v];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		// directed edge from a->b
		adj[a].push_back(b);
	}
	 // cout<<adj[2][0];
	
	//cout<<adj[0][0];
	vector<bool>visited;
	for(int k=0;k<v;k++)
	visited[k]=false;
	
	stack<int>s;
	vector<int>adj1[v];
	
	
	dfs_1(0,adj,s,visited);
	
	// create reverse graph
    for(int i=0;i<v;i++)
	visited[i]=false;	
   
	for(int i=0;i<v;i++)
	{
		for(auto x : adj[i])
		adj1[x].push_back(i);
	 } 
	 
	 kosaraju(adj1,s,visited);
}
 
 // rinitialise the visited for second dfs
 	//memset(visited,0,sizeof(visited));
 
 
