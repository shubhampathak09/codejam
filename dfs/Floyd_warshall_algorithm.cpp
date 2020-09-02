// floyd warshalls all pair shortest [ath

#include<bits/stdc++.h>
using namespace std;

#define INF 1e9
#define v 4


void allpairshortestpath(int graph[][v])

{
	
	int dist[v][v];
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			 dist[i][j]=graph[i][j];
			
		}
	}
	
	for(int k=0;k<v;k++)
	{
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				 
			 dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
			}
		}
	}
	
	// printing all pair shortest path matrix
	
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			if(dist[i][j]==INF)
			cout<<"INF"<<"   ";
			else
			cout<<dist[i][j]<<"   ";
		}
		cout<<"\n";
	}
	
}

int main()
{
	
	int graph[v][v] = { {0, 5, INF, 10},  
                        {INF, 0, 3, INF},  
                        {INF, INF, 0, 1},  
                        {INF, INF, INF, 0}  
                    };  
  
  
  allpairshortestpath(graph);
	
}
