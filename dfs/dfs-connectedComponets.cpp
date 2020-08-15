// connected components
#include<bits/stdc++.h>
using namespace std;

// let say there are three coonected 
 
void dfs(int src,vector<vector<int>>g,bool *visited)
{
	visited[src]=true;
	for(auto x:g[src])
	{
		if(visited[x]==false)
		{
			visited[x]=true;
			dfs(x,g,visited);
		}
	}
 } 
 
void algorithm()
{
	
	int count=0;
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n);
	bool visited[n];
	for(int i=0;i<n;i++)
	visited[i]=false;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		if(visited[i]==false)
		{
			count++;
			dfs(i,g,visited);
		}
	}
	
	cout<<count;
}
int main()
{
	algorithm();
	// 1(0) + 2(1) +3(3)+4(4)
	//1+3+4=8
	
	
}
