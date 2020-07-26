#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7 //10000007;

void solve()
{
	

	// inputs
	int n,m,k,s;
	cin>>n>>m>>k>>s;

   	vector<vector<pair<int,pair<int,int>>>>g(n+1);
	vector<int>dist(n+1);
	for(int i=1;i<=n;i++)
	dist[i]=INF;
	
	
	int ds=INF;
	// cost matrix;
	int cost[k+1][k+1];   // cij-> if previous route used by company i and current route is by company j then extra price to pay..
// input cost
    	for(int i=1;i<=k;i++)
    	{
    		for(int j=1;j<=k;j++)
    		cin>>cost[i][j];
		}
		
		// adding edges to the graph
		for(int i=0;i<m;i++)
		{
			
			int u,v,c,t;
			// u is src
			//v is dest
			// cost incurred
			// t is the company controlling it
			cin>>u>>v>>c>>t;
			
			g[u].push_back({v,{c,t}});
			g[v].push_back({u,{c,t}});
			
		}
		
		// intialsing the source s
		dist[s]=0;
		// priority queue
		priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
		
		pq.push({s,{dist[s],-1}});
	    
		while(!pq.empty())
		{
			auto x=pq.top();
			pq.pop(); 
		    int fir=x.first;// origin vertex to be iterated
		    int sec=x.second.first; // distance to orign so far 
		    int thir=x.second.second; // previous city, current city is=first extra cost would be cost[third][x] if third is not -1
			
			for(auto z:g[fir])
			{
				int ver=z.first;
				int city=z.second.second;
				int cos=dist[fir]+z.second.first;
				if(thir!=-1)
				{
					cos+=cost[thir][city];
				}
				if(cos<dist[z.first])
				{
				
				dist[z.first]=cos;
				pq.push({z.first,{dist[z.first],city}});
			}
			}
			}
			
			for(int i=1;i<=n;i++)
			{
				  if(dist[i]==INF)
				  cout<<"-1"<<"\t";
				  else
				 cout<<dist[i]<<"\t";
				}	
		
		
		//cout<<ds;
}
int main()
{
	solve();
	
}

