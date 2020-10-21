#include<bits/stdc++.h>
using namespace std;


bool iscycleutil(int v,vector<vector<int>>g,int parent,vector<bool>visited)
{
	
	visited[v]=true;
	
	for(auto x:g[v])
	{
		
		if(!visited[x])
		{
			if(iscycleutil(x,g,v,visited))
			return true;
		}
		else if (x!=parent)
		return true;
	}
	return false;
	
}

bool iscycle(vector<vector<int>>g,int n)
{
	vector<bool>visited(n);
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<n;i++)
	{
		if(iscycleutil(i,g,-1,visited))
		return true;
	}
	return false;
}

int main()
{
	int n,m;
	cin>>n>>m;
   	vector<vector<int>>g(n);
		
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	if(iscycle(g,n))
	{
		cout<<"Cycle present in undirected graph";
	}
	else
	{
		cout<<"Cycle is not present";
	}

}
