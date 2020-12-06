// detect a cycle in graph

#include<bits/stdc++.h>
using namespace std;



bool cycledetect(int u,int parent,vector<int>g[],bool *visited)
{
	
	visited[u]=true;
	
	for(auto x:g[u])
	{
		if(visited[x]==false)
		{
			if(cycledetect(x,u,g,visited))
			return true;
		}
		else if(x!=parent)
		return true;
		
	}
	return false;
	
}


void dfs(int v,vector<int>g[])
{
	
	bool visited[v];
	
	memset(visited,false,sizeof(visited));
	
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		{    // always miss this cndition
		if(cycledetect(i,-1,g,visited)==true)
		{
			cout<<"cycle detect at vertex:-"<<i<<endl;
			return;
		}
	}
	}
	
	cout<<"Cycle not found";
	return;
}

int main()
{
	
	int v=4;
	
	vector<int>g[v];
	
	g[0].push_back(1);  
	g[1].push_back(0);    
	g[0].push_back(2);   
	g[2].push_back(0);
	g[2].push_back(3);
	g[3].push_back(2);
	g[3].push_back(1);
	g[1].push_back(3);
	
	
	dfs(v,g);
	
	
	
}
