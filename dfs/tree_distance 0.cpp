// tree disitances given a node form(1...to n) find the Shirtest ddistance of this node from all other nodes
// ewe can use a gneral BFS or an unweighted dijkstras search
// here i will slove this by dijkstras


// tree-distances 0

#include<bits/stdc++.h>
using namespace std;

#define INF 1e9


void tree_distance()
{
	
	
	int n,m;
	
	cin>>n>>m;
	vector<vector<int>>g(n+1);
	vector<int>dist(n+1);
	 //	memset(dist,INF,sizeof(dist));
	
	for(int  i=1;i<=n;i++)
	dist[i]=INF;
	
	for(int i=0;i<m;i++)
	{
     int a,b;
	 cin>>a>>b;
	 g[a].push_back(b);		
	 g[b].push_back(a);	
	}
	int src;
	cin>>src;
	priority_queue<int,vector<int>,greater<int>>pq;
	pq.push(src);
	dist[src]=0;
    while(!pq.empty())
	{
      int u=pq.top();
      pq.pop();
      
	  for(auto x:g[u])
	  {
	  	if(dist[x]>dist[u]+1)
	  	{
	  		dist[x]=dist[u]+1;
	  		pq.push(x);
		  }
	  }
	  		
		}
		
		for(int i=1;i<=n;i++)
		cout<<dist[i]<<"\n";
			
}

int main()
{
	
	tree_distance();
	
}
