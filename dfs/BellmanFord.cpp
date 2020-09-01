// BellmanFord

#include<bits/stdc++.h>
using namespace std;

struct edge
{
	int src;
	int dest;
	int weight;
	
};

struct graph
{
	int v,e;
	struct edge*edge1;
	
};

struct graph*creategraph(int v,int e)
{
	struct graph*graph1=new graph;
	graph1->v=v;
	graph1->e=e;
	
	graph1->edge1=new edge[graph1->e];
	
}

bool checkcyle(struct graph*graph1,int src)
{
	
	int v=graph1->v;
	int e=graph1->e;
	
	int dist[v];
	
	for(int i=0;i<v;i++)
	dist[i]=INT_MAX;
	
	for(int i=1;i<=v-1;i++)
	{
		for(int j=0;j<e;j++)
		{
			int u=graph1->edge1[j].src;
			int v=graph1->edge1[j].dest;
			int wt=graph1->edge1[j].weight;
			
			if(dist[u]+wt<dist[v]&&dist[u]!=INT_MAX)
			dist[v]=dist[u]+wt;
		}
	}
	
   for(int i=0;i<e;i++)
   {
   	int u=graph1->edge1[i].src;
   	int v=graph1->edge1[i].dest;
   	int weight=graph1->edge1[i].weight;
   	if(dist[u]+weight<dist[v]&&dist[u]!=INT_MAX)
   	return true;
   }
	
	return false;
}


int main()
{
	
	int v=5,e=8;
	
	struct graph*graph1=creategraph(v,e);
//	
//	// add edge 0-1 with weight=-1
//	graph1->edge[0].src=0;
//	graph1->edge[0].dest=1;
//	graph1->edge[0].weight=-1;
//	
//	// add edge 0-2 weight=4
//	graph1->edge[1].src=0;
//	graph1->edge[1].dest=2;
//	graph1->edge[1].weight=4;
//	
//	// add edge 1-2 weight =3
//	
//	graph1->edge[2].src=1;
//	graph1->edge[2].dest=2;
//	graph1->edge[2].weight=3;
	
	int source[]={0,0,1,1,1,3,3,4};
	int destn[]={1,2,2,3,4,2,1,3};
	int wt[]={-1,4,3,2,2,5,1,-3};
	
	for(int i=0;i<e;i++)
	{
	//	int a,b,c; // src dest weight
	graph1->edge1[i].src=source[i];
	graph1->edge1[i].dest=destn[i];
	graph1->edge1[i].weight=wt[i];
	 } 
	
	int src=0;
	
	//cout<<
	if(checkcyle(graph1,src))
	cout<<"Negetive Cycle Presnt in graph..";
	else
	cout<<"Negetive Cycle Not Presnet in graph";
	 
}

