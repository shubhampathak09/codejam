// low link value is deffined as arrival time whenm nthat vertextc is reached

#include<bits/stdc++.h>
using namespace std;


vector<int>arr[101];

int in[101];
int low[101],visited[101];

int timer;


void dfs(int node,int parent)
{
	
	visited[node]=1;
	in[node]=low[node]=timer;
	timer++;
	
	for(int child:arr[node])
	{
		if(child==parent)
		continue;
		
		if(visited[child]==1)
		{
			// edge npde-child is back edge
			low[node]=min(low[node],in[child]);
			
		}
		else
		{
			// edge if forward edge
			
			dfs(child,node);
			
			// test for brifge, check low node of tnode
			
			//low node<in child no bridge
			if(low[child]>in[node])
			cout<<node<<" "<<child<<" is a bridge"<<endl;
			// minimise the node
			low[node]=min(low[node],low[child]);
		}
		
	}
	
}

int main()
{
	
	int n,m,a,b;
	
	//n vertices m edges
	cin>>n>>m;
	
	while(m--)
	{
		cin>>a>>b;
		arr[a].push_back(b);
		
		arr[b].push_back(a);
	}
	
	
	dfs(1,-1);  //vertex and parent
	
	 
}



