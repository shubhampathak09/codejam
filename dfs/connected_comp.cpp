
#include<bits/stdc++.h>
using namespace std;

bool visited[10001];

void dfs(int source,vector<vector<int>>g,bool *visited)
{
	visited[source]=true;
	
	for(auto x: g[source])
	{
		if(visited[x]==false)
		{
			dfs(x,g,visited);
		}
	}
}

int connectedcomp(vector<vector<int>>g,int n)
{
//	bool visited[g.size()+1];
//	memset(visited,false,sizeof(visited));
//	cout<<result;
	
	int result=0;
    //cout<<result;
   // cout<<g.size();
	for(int i=1;i<=n;i++)
	
	{
		if(visited[i]==false)
		{
		
		dfs(i,g,visited);
		result++;
	}
	}
	
	//cout<<result;
	
	return result;
}

int main()
{
	
	int n,m;
	cin>>n>>m;
	memset(visited,false,sizeof(visited));

    vector<vector<int>>g(n+1);
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		
		
	}
		
	
	
	cout<<connectedcomp(g,n);
	
}
