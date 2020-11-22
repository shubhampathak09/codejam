// bridges
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g(100);
vector<int>in(100),low(100);
int visited[100];
int timer;

void dfs(int v,int parent)
{
	visited[v]=1;
	in[v]=timer;
	low[v]=timer;
    timer++;
	
	for(int x:g[v])
	{
		if(x==parent)
		continue;
		
		if(visited[x]==1)
		{
			// backedge
			low[v]=min(low[v],in[x]);
		}
		else
		{
			//cout<<low[x]<<" "<<in[x];
		    //cout<<endl;
		    dfs(x,v);
			//forward edge
			if(low[x]>in[v])
			{
				// bridge there
				cout<<v<<" "<<x<<endl;
			}
			low[v]=min(low[v],low[x]);
		}
		}	
}

int main()
{
	
	int n,m;
	cin>>n>>m;
	int a,b;
	while(m--)
	{
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	dfs(1,-1);
}

