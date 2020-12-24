// cses

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g(101);
bool visited[101];

int sz[101];


void dfs(int src)
{
	
	visited[src]=1;
	sz[src]=1;
	
	for(auto x:g[src])
	{
		if(visited[x]==false)
		{
			dfs(x);
			sz[src]+=sz[x];
		}
	}
	
}


int main()
{
	
	int n;
	
	cin>>n;
	
	for(int i=2;i<=n-1;i++)
	{
		int boss;
		cin>>boss;
		g[boss].push_back(i);
		g[i].push_back(boss);
	}
	dfs(1);
	
	for(int i=1;i<=n;i++)
	{
		cout<<sz[i]<<" ";
	}
}
