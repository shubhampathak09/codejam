// floyd warshall
#include<bits/stdc++.h>
using namespace std;


#define V 4
#define INF 100000007

// floyd_warshall standarad impl,to find shortest path from every node to every other node multisource shprtest paths

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
	//o(n3)  see lectuers to understand more about the algo	
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
// adjacency matrix based impl can be extended to adjacency lists as well
// check for interconversion b/w adjacency list and adjacnecy matrix:p
floyd_warshall(graph);

 } 
