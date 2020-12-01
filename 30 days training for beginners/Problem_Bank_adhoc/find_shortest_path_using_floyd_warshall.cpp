// find shortest path between any two nodes using floyd warshalls algorithm

#include<bits/stdc++.h>
using namespace std;

#define V 4
#define INF 1000007
// u=1 and v=3


void solve()
{
	
	int g[V][V]={{0,3,INF,7},{8,0,2,INF},{5,INF,0,1},{2,INF,INF,0}};
	
	 int u=1;
	 int v=3;
	
    int dist[V][V];
    
    vector<int>path;
    for(int i=0;i<V;i++)
    {
    	for(int j=0;j<V;j++)
    	{
    		dist[i][j]=g[i][j];
		}
	}
	
//	path.push_back(u);
	for(int k=0;k<V;k++)
	{
		for(int i=0;i<V;i++)
		{
			for(int j=0;j<V;j++)
			{
				if(dist[i][k]+dist[k][j]<dist[i][j])
				{
				
				dist[i][j]=dist[i][k]+dist[k][j];
			//	path.push_back(k);
			}
			}
		}
	}
	
//	path.push_back(v);
	
   	
	
	if(dist[u][v]==INF)
	{
		cout<<"INF";
	}
	else 
	cout<<dist[u][v];
	
	
	cout<<endl;
	
 
}

int main()
{
	
	solve();
	
}
