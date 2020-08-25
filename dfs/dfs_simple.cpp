#include<bits/stdc++.h>
using namespace std;

void dfs(int source,vector<int>adj[],bool*visited,stack<int>&s)
{
	visited[source]=true;
	//cout<<source;
	for(auto x:adj[source])
	{
		
		if(visited[x]==false)
		{
			dfs(x,adj,visited,s);
		}
		
	}
	s.push(source);
}

int main()
{
	
	int v,e;
	cin>>v>>e;
	vector<int>adj[v];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
	}
	bool *visited;
	for(int i=0;i<v;i++)
	visited[i]=false;
	
	stack<int>s,s1;
	
	dfs(0,adj,visited,s);
	
	while(!s.empty())
	{
		s1.push(s.top());
		s.pop();
	}
	
	cout<<"Printing the  vertices in lowest order of finsih times first we get...";
	
	while(!s1.empty())
	{
		cout<<s1.top();
		s1.pop();
	}
}
