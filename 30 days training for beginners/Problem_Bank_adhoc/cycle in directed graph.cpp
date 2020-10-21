#include<bits/stdc++.h>
using namespace std;


bool iscycleutil(int v,vector<vector<int>>g,vector<bool>visited,vector<bool>recstack)
{
	if(visited[v]==false)
	{
		visited[v]=true;
		recstack[v]=true;
		
	 /*   for(auto x:g[v])
	    {
	    	if(visited[x]==false&&iscycleutil(x,g,visited,recstack))
	    	return true;
	    	if(recstack[x]==true)
	    	return true;
		}
		*/
		
		for(int i=0;i<g[v].size();i++)
		{
			if(!visited[g[v][i]]&&iscycleutil(g[v][i],g,visited,recstack))
			return true;
			if(recstack[g[v][i]])
			return true;
		}
		
		
		recstack[v]=false;
		return false;
	}
	
	
}


bool iscycle(vector<vector<int>>g,int n)
{
	
	vector<bool>visited(n);
	vector<bool>recstack(n);
	
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
		recstack[i]=false;
	}
	
	for(int i=0;i<n;i++)
	{
		if(iscycleutil(i,g,visited,recstack))
		return true;
	}
	return false;
}


int main()
{
	
	int n,m;  // vertices and edges;
	
	vector<vector<int>>g(n);
	cin>>n>>m;
	// 0-1,0-2,1-2,2-0,2-3,3-3
	// 0 1 2 3
    for(int i=0;i<m;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	g[a].push_back(b);
    //	g[b].push_back(a);
	}
	
	
 	if(iscycle(g,n))
 	{
 		cout<<"Cycle exisits";
	 }
	 else
	 {
	 	cout<<"Cycle does not exist";
	 }
	
}
