// multisouce shortest path



// Some not workinjg shit very sad dahy
// 21 sep 2020  
// fuckkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk


#include<bits/stdc++.h>
using namespace std;

#define N 1000

int dis[N];
bool visited[N];


int source[N];

queue<pair<int,int>>q;

void addEdge(vector<int>g[],int a,int b)
{
	g[a].push_back(b);
	g[b].push_back(a);
	
}



void bfs(vector<int>g[],int source1)
{
	while(!q.empty())
	{
		q.pop();
	}
	
	q.push({source1,0});
	while(!q.empty())
	{
		int fir=q.front().first;
		int second=q.front().second;
		visited[fir]=true;
	//	dist[first]=second;
		
		if(source[fir]==1)
		{
			dis[source1]=second;
			return;
		}
		for(auto x:g[fir])
		{
			if(visited[x]==false)
			{
				q.push({x,second+1});
			}
		}
	}
}

void nearesttown(vector<int>g[],int n,int sources[],int s)
{
	
	// reseting the source hash array 
    for (int i = 1; i <= n; i++) 
        source[i] = 0; 
    for (int i = 0; i <= s - 1; i++) 
        source[sources[i]] = 1; 
  
    // loop through all the vertices and run 
    // a BFS from each vertex to find the distance 
    // to nearest town from it 
    for (int i = 1; i <= n; i++) { 
    
        for (int i = 1; i <= n; i++) 
            visited[i] = 0; 
            
        bfs(g, i); 
    } 
  
    // Printing the distances 
    for (int i = 1; i <= n; i++) 
        cout << i << " " << dis[i] << endl; 
	
}


int main()
{
	
	int n=6;
	int m=9;
	vector<int>graph[n+1];
	 
	addEdge(graph, 1, 2); 
    addEdge(graph, 1, 6); 
    addEdge(graph, 2, 6); 
    addEdge(graph, 2, 3); 
    addEdge(graph, 3, 6); 
    addEdge(graph, 5, 4); 
    addEdge(graph, 6, 5); 
    addEdge(graph, 3, 4); 
    addEdge(graph, 5, 3);  
	 
    int source[]={1,5};
	
	int s=sizeof(source)/sizeof(source[0]);
		
	nearesttown(graph,n,source,s); 
	 
	 
}
