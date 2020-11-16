//Eulerian path is path in graph that visites
//every edge excactly ok
//Euler circuit is euler path st start vertex=end vertex
// problem to check if given graph is eulerian
//if euler circuit exists->we say eulerian
// if only euler path=>semi eulerian
// o(v+e) we can solve the problem 

// properties
/*
Eulerian cycle
-all vertices with nonzero degree are 
connected
-all vertices have even degree
*/

// euler path
// have non zero degreess connected
// if zero or two vertices have odd degree and
//rest have even degree
//
#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void dfs(int src,vector<int>*adj,bool *visited)
{
	visited[src]=true;
	
	for(int i=0;i<adj[src].size();i++)
	{
		if(!visited[adj[src][i]])
		dfs(adj[src][i],adj,visited);
	}
}


bool isconnected(vector<int>*adj,int V)
{
	
	// handling the condition if zero degree vertices are there
	int count=0;   
	for(int i=0;i<V;i++)
	{
		if(adj[i].size()==0)
		count++;
	}
    
	if(count==V)
	return true;  //handled the base case
		
	bool visited[V];
	
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	for(int i=0;i<V;i++)
	dfs(i,adj,visited);
	
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		return false;
	}
	return true;
}

bool checkEuler(vector<int>*adj,int V)
{
	if(isconnected(adj,V)==false)
	return false;
	
	// 0 odd degree 2 odd degree
	
	int odd=0;
	for(int i=0;i<V;i++)
	{
		if(adj[i].size()&1)
		odd++;
	}
	
	if(odd>=2)  // condtion will change for euler path & eucler circut so think!
	return false;
	
	// odd count 2 semi-eulerian
	// odd count 0->euler graph->euler circuit exits
	// lets say semi eulerian is also false we check for euler circuit present or not
	// as odd count cant  be 1, this here mean odd count =0 so eulerc cuircuti
	
	return true; 
}


int main()
{
	
	vector<int>graph[5];
	
	addedge(graph,0,1);
	addedge(graph,0,3);
	addedge(graph,1,2);
	addedge(graph,0,2);
	addedge(graph,0,4);
//	addedge(graph,0,3);
	addedge(graph,3,4);
	
	cout<<checkEuler(graph,5);
//    for(int i=0;i<5;i++)
//	cout<<graph[i].size()<<" ";	
//	cout<<isconnected(graph,5);
}
