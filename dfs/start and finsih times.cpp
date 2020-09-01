
#include<bits/stdc++.h>
using namespace std;

int start[1000];
int finish[1000];

int timer=0;
void dfs(int u,vector<vector<int>>g,bool *visited)
{
	start[u]=timer;
	timer++;
	visited[u]=true;
	cout<<u<<" ";
	
	for(int i=0;i<g[u].size();i++)
	{
		if(visited[g[u][i]]==false)
		dfs(g[u][i],g,visited);
	}
	
	finish[u]=timer++;
}

int main()
{
	
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>>g(n);
	
	bool visited[n];
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for(int i=0;i<n;i++)
	visited[i]=false;
	
	dfs(0,g,visited);
	
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<start[i]<<"\t";
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<finish[i]<<"\t";
	
}
