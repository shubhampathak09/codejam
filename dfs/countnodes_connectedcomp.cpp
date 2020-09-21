#include<bits/stdc++.h>
using namespace std;

bool visited[1000];

void dfs(vector<vector<int>>g,int s,bool visited[])
{
	int countnodes=1;
	visited[s]=true;
	
	for(auto x:g[s])
	{
		if(visited[x]==false)
		{
			countnodes++;
			dfs(g,x,visited);
		}
	}
	cout<<countnodes;
}

void solve()
{
	
	int n,m;
	cin>>n>>m;
	
	int count=0;
	vector<vector<int>>g(n+1);
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		
		
	}
	
	for(int i=1;i<=n;i++)
	{
		dfs(g,i,visited);
		count++;
		cout<<endl;
	}
	
	cout<<"count"<<"..."<<count;
}

int main()
{
	
	memset(visited,false,sizeof(visited));
	
	solve();
	
	}
