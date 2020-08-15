// umweghted graph shortest path
#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	int n,m;
	cin>>n>>m;
	
//	vector<int>dist(n+1);
   	
 	int dist;
	vector<vector<int>>g(n+1);
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	int src=1;
//	cin>>src;
	dist=0;
	int dest;
	cin>>dest;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({src,dist});
	int shortest_dist=INT_MAX;
	while(!pq.empty())
	{
		
		pair<int,int>p=pq.top();
		pq.pop();
		
		for(auto x:g[p.first])
		{
			
			int dis=p.second+1;
		//	shortest_dist=min(shortest_dist,dis);
			if(x==dest)
			{
				cout<<dis;
				return;
			}
			
			pq.push({x,dis});
			
			
		}
		
	}
	
	cout<<"Not Found";
}

int main()
{
	solve();
}
