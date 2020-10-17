// detect 4negetive cycle
#include<bits/stdc++.h>
using namespace std;
#define INF 1e7
struct Edge
{
	int src;
	int dest;
	int weight;
};

struct graph
{
	int V;
	int E;
	struct Edge*edge;
	
	graph(int v,int e)
	{
		V=v;
		E=e;
		edge=new Edge[E];
	}
};


void printdistances(int dist[],int v)
{
	for(int i=0;i<v;i++)
	{
		cout<<dist[i]<<" ";
	}
}

void BellmanFord(struct graph*g,int src)
{
	int vertices=g->V;
	int ed=g->E;
	int dist[vertices];
	
	for(int i=0;i<vertices;i++)
	dist[i]=INF;
	dist[src]=0;
	
	// relax vertices-1 times
	
	for(int i=1;i<=vertices-1;i++)
	{
		for(int j=0;j<ed;j++)
	    {
	    	int u=g->edge[j].src;
	    	int v=g->edge[j].dest;
	    	int wt=g->edge[j].weight;
	    	if(dist[v]>dist[u]+wt&&dist[u]!=INF)
	    	{
	    		dist[v]=dist[u]+wt;
			}
		}
	}
	
	for(int i=0;i<ed;i++)
	{
		int u=g->edge[i].src;
		int v=g->edge[i].dest;
		int wt=g->edge[i].weight;
		
		if(dist[v]>dist[u]+wt&&dist[u]!=INF)
		{
			cout<<"Negetive Cyle"<<endl;
			return;
		}
	}
	
	printdistances(dist,vertices);
	
}

int main()
{
	
	int v=5;  // 5 vertices and 8 edges
	int e=8;
	graph *g=new graph(v,e);
	
	// 0-1 edge weight =-1
	
	g->edge[0].src=0;
	g->edge[0].dest=1;
	g->edge[0].weight=-1;
	
	//0-2
	g->edge[1].src=0;
	g->edge[1].dest=2;
	g->edge[1].weight=4;
	
    //1-2 edge
    g->edge[2].src=1;
    g->edge[2].dest=2;
    g->edge[2].weight=3;
    
    //1-3 edge
    g->edge[3].src=1;
    g->edge[3].dest=3;
    g->edge[3].weight=2;
    
    //1-4 edge
    g->edge[4].src=1;
    g->edge[4].dest=4;
    g->edge[4].weight=2;
    
    //3-2
    g->edge[5].src=3;
    g->edge[5].dest=2;
    g->edge[5].weight=5;
    
    //3-1
    g->edge[6].src=3;
    g->edge[6].dest=1;
    g->edge[6].weight=1;
    
    //4-3
    g->edge[7].src=4;
    g->edge[7].dest=3;
    g->edge[7].weight=-3;
    
    
	BellmanFord(g,0);
	
	
}
