// articulation point

#include<bits/stdc++.h>
using namespace std;

/*
in[];
low[];

vertex=visited=1;
in[vertex]=timer;
low[vertex]=timer;
timer++;

int adj:vertex


if(adj==parent)
continue;

if(visited[adj]==false)
{
	dfs(adj,vertex);
	//condition of bridge
	
	if(low[adj]>in[vertex])
	cout<<v<<""<<x
	
	//updation
    low[vertex]=min(low[vertex,low[adj]]);
}

else
{
	low[vertex]=min(low[vertex],in[adj]);
}

*/

vector<int>g[100];
int in[100],low[100];
int visited[100];

int timer;

void dfs(int v,int parent)
{
	visited[v]=1;
	in[v]=low[v]=timer;
	timer++;
	for(auto x:g[v])
	{
	
	if(x==parent)
	continue;
	
	if(visited[x]==true)
	{
		
		low[v]=min(low[v],in[x]);
		
	}
	else
	{
		dfs(x,v);
		if(low[x]>in[v])
		{
			cout<<v<<" "<<endl;
		}
		low[v]=min(low[v],low[x]);
	}
}

}

int main()
{
	int n,m;
	cin>>n>>m;
	
	while(m--)
	{
		int a,b;
		
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	dfs(1,-1);
}
