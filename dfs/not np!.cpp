// so NP?
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g(10001);

void dfs(int i,vector<vector<int>>g,bool *visited)
{
	
	visited[i]=true;
	for(auto x:g[i])
	{
		if(visited[x]==false)
		dfs(x,g,visited);
	}
	
}

void solve()
{
	int n,m,k;
	
		cin>>n>>m>>k;
	
	  
	    
	    bool visited[10001];
	    
	    for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		
		
	}
	
	for(int i=1;i<=n;i++)
	{
		visited[i]=false;
	}
	int count=0;
	
	for(int i=1;i<=n;i++)
{
	if(visited[i]==false)
	{
		dfs(i,g,visited);
		count++;
	}
}
if(count>k)
cout<<-1;

else
{
	cout<<m-n+k;
}
	
}

int main()
{
	

	solve();
	
	
}
