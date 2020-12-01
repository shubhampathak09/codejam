// floyd warshall all pair shortest path impl


#include<bits/stdc++.h>
using namespace std;

#define INF 1000007

#define V 4

void print(int dist[V][V])
{
	
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			if(dist[i][j]==INF)
			cout<<"INF"<<" ";
			else
			cout<<dist[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
}

void solve(int g[V][V])
{
	
	int dist[V][V];
	
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			dist[i][j]=g[i][j];
		}
	}
	
	for(int k=0;k<V;k++)
	{
		for(int i=0;i<V;i++)
		{
			for(int j=0;j<V;j++)
			{
				
				if(dist[i][k]+dist[k][j]<dist[i][j])
				{
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}
	
	print(dist);
}


int main()
{
	
	
	 /* Let us create the following weighted graph  
            10  
    (0)------->(3)  
        |     /|\  
    5 |     |  
        |     | 1  
    \|/     |  
    (1)------->(2)  
	      3
*/

int g[V][V]={{0,5,INF,10},
{INF,0,3,INF},
{INF,INF,0,1},
{INF,INF,INF,0}};


solve(g);

}
