// search algorithms

//dfs

//The third way implies storing vertices too, but now each vertex is added every time when we visit it 
//(when descending from parent and when returning from child).


//The second way is to store vertices. Each vertex is added to the array twice: 
//when we descend into it and when we leave it.
// Each leaf (except maybe root) has two consecutive entries.

#include<bits/stdc++.h>
using namespace std;

void dfs(int source,vector<vector<int>>g,vector<bool>visited)
{
	visited[source]=true;
	cout<<source<<"\t";
	for(auto x: g[source])
	{
		if(visited[x]==0)
		{
		
		dfs(x,g,visited);
	//	cout<<x<<"\t";
	}
	
	//cout<<source<<"\t";
	
	}
	
//	if(visited[source]==true)
  //  if(g[source].size()!=0)
	cout<<source<<"\t";
	
}

void printpath()
{
	
	// {[1-2],[2-3],[3-2],[2-4],[4-2],[2-1],[1-5],[5-1]
	
	int v,e;
	cin>>v>>e;
	
	vector<vector<int>>g(v+1);
	vector<bool>visited(v+1,0);
	for(int i=1;i<=e;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	// source =1; // tree intialised let print the path from source and back to source
	int source=1;
	queue<int>q;
	 
    dfs(source ,g,visited);	
 
}
int main()
{
	
	printpath();
	
}

