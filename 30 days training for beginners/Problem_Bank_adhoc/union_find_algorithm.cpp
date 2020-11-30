//union find

// two primary operations
//union AND find

/// application 
// kruskal minimum spanninf tree problem
// grid percolation
// network connectivity
//least common ancestor
// image processing
//construction ->o(n)
//union alpha(n)
//alpha n->ammortized time

 // union find algorithm
 
#include<bits/stdc++.h>
using namespace std;

struct Edge
{
	int src;
	int dst;
	int wt;
	
};


struct graph
{
	int V,E;
	Edge *edge;
	
	graph(int V,int E)
	{
		this->V=V;
		this->E=E;
		this->edge=new Edge[E];
	}
 };
 // no need for creategraph,just use constructor
 
 
 int find_(int parent[],int i)
 {
 	if(parent[i]==-1)
 	return i;
 	
 	return find_(parent,parent[i]);
 }
 
 void union_(int parent[],int x,int y)
 {
 	parent[x]=y;
 }
 
 
 int iscycle(graph*g)
 {
 	
 	int parent[g->V*sizeof(int)];
 	
 	memset(parent,-1,sizeof(parent));
 	
 	for(int i=0;i<g->E;i++)
 	{
 		int x=find_(parent,g->edge[i].src);
 		int y=find_(parent,g->edge[i].dst);
 		
 		if(x==y)
 		return 1;
 		
 		union_(parent,x,y);
	 }
	 return 0;
 }
 
 int main()
 {
 
 	int V=3;
 	int E=3;
 	
/* 	0
 	|\
 	| \
 	1--2
 	*/
 	
 	graph *g=new graph(V,E);
 	
 	for(int i=0;i<E;i++)
 	{
 		int a,b;
 		cin>>a>>b;
 		g->edge[i].src=a;
 		g->edge[i].dst=b;
	//	g->edge[i].wt=c;
 	 }
 	 
 	 
 	 if(iscycle(g))
 	 {
 	 	cout<<"Yes";
	  }
	  else
	  cout<<"No";
	  
 
  } 
