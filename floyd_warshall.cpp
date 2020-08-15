// floyd warshall
#include<bits/stdc++.h>
using namespace std;


#define V 4
#define INF 100000007

void floyd_warshall(int graph[V][V])
{
	
for(int k=0;k<V;k++)
{
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			for(int k=0;k<V;k++)
			{
				if(graph[i][k]<INF&&graph[k][j]<INF)
				graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
			}
		}
	}
	}	
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			cout<<"shortest path from vertex "<<i<<" to "<<j<<"\t"<<graph[i][j]<<"\n";
		}
		cout<<"\n";
	}
}

 

int main()
{
	
//cout<<func(5);

int graph[V][V]={{0,5,INF,10},{INF,0,3,INF},{INF,INF,0,1},{INF,INF,INF,0}};

floyd_warshall(graph);

 } 
