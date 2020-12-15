// multi source shortest paths

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>g;

vector<bool>visited;

vector<int>dist;

map<int,int>m;

int dist[n+1];

void bfs(int vertex)
{
	queue<pair<int,int>>q;
	//dist[source]=0;
	
	q.push(vertex);  
	
    while(!q.empty())
	{
		
		int u=q.front().first;
		int d=q.front().second;
		
		if(m[u]==1)
		{
			cout<<
		}
		q.pop();
		visited[u]=1;
		
		for(auto x:g[u])
		{
			
		}
		}	
	
}

int main()
{
	
	
	
}
