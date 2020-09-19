#include<bits/stdc++.h>
using namespace std;
#define maxn 1000

int sz[maxn];


void getsz(vector<vector<int>>g,int v,int p)
{
	sz[v]=1;
	
	for(auto x: g[v])
	{
		if(x!=p)
		{
			getsz(g,x,v);
			sz[v]+=sz[x];
		}
	}
	
}
int main()
{
	
	int v=5,e=4;
	
	vector<vector<int>>g(v+1);
	
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	getsz(g,1,0);
	
	for(int i=1;i<=v;i++)
	cout<<sz[i];
}
