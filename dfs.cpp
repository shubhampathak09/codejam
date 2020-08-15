// dfs standarad algoruthm

#include<bits/stdc++.h>
using namespace std;

	void dfs(int src,vector<vector<int>>g,bool *visited)
	{
		cout<<src;
		visited[src]=1;
		for(int i=0;i<g[src].size();i++)
		{
			if(!visited[g[src][i]])
			dfs(g[src][i],g,visited);
		}
	}

void solve()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n);
	for(int i=0;i<m;i++)
	{
		
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	bool visited[n];
	for(int i=0;i<n;i++)
	visited[i]=0;
	 
    dfs(0,g,visited);
	
}
int main()
{
	
	solve();
	
	
}
