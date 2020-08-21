// pls check the output


#include<bits/stdc++.h>
using namespace std;


#define max 1000009
vector<int>eulerpath(max);

void dfs(int source,vector<vector<int>>g,vector<bool>visited,vector<int>eulerpath,int &index)
{
	
	visited[source]=true;
	eulerpath[index++]=source;
	
	for(auto x:g[source])
	{
		if(visited[x]==false)
		{
			
			dfs(x,g,visited,eulerpath,index);
			eulerpath[index++]=source;
		}
		
	}
	
}

int main()
{
	
	int n,e;
	cin>>n>>e;
	vector<vector<int>>g(n+1);
	vector<bool>visited(n+1,0);
	
	
	for(int i=0;i<e;i++)
	{
		
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		
	}
	int c=0;
	dfs(1,g,visited,eulerpath,c);
	
	for(auto x:eulerpath)
	cout<<x;
}
