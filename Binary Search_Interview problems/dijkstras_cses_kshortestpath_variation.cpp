//// dijkstras k shortest paths
//
////priority_queue<pair<int,int>,vector<pair<int,int>>,greater<int,int>>pq;
//
//// pq.push({dist,src})-> pq.push({0,1});
//
//// (cost,destinationa)
///*
//while(!pq.empty)
//{
//	
//	auto v=pq.top();
//	pq.pop();
//    for(auto x:g[v.second])
//    {
//    	if(dist[x]>dist[v.second]+v.first)
//    	{
//    		dist[x]=dist[v.second]+v.first;
//    		pq.push({dist[x],x});
//		}
//	}
//	
//}*/
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int n,m,k;
//
//vector<vector<pair<int,int>>>g;
//vector<vector<int>>dist;
//
//#define mx 1e9;
//
//void dij()
//{
//	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//	
//	pq.push({0,1});
//	
//	while(!pq.empty())
//	{
//		
//		int u=pq.top().second;
//		int d=pq.top().first;
//		pq.pop();
//		
//		if(dist[u][k-1]<d)
//		continue;
//		
//		for(auto x:g[u])
//		{
//           if(dist[x.first][k-1]>x.second+d)
//		   {
//		   	dist[x.first][k-1]=x.second+d;
//		   	pq.push({dist[x.first][k-1],x.first});
//		   	sort(dist[x.first].begin(),dist[x.first].end());
//					   }			
//			
//		}
//		
//	}
//	
//}
//
//
//int main()
//{
//	
//	
//	cin>>n>>m>>k;
//	
//	g.resize(n+1);
//	dist.resize(n+1);
//	
//	for(int i=1;i<=n;i++)
//	{
//		dist[i].resize(k);
//		for(int j=0;j<k;j++)
//		{
//			dist[i][j]=mx
//		}
//	}
//	
//	dist[1][0]=0;
//	
//	for(int i=0;i<m;i++)
//	{
//	int a,b,c;
//	cin>>a>>b>>c;
//	g[a].push_back({b,c});
////	g[b].push_back({a,c});	
//	}
//	
//	dij();
//	
//	for(int i=0;i<k;i++)
//	{
//		cout<<dist[n][k]<<" ";
//	}
//	
//}











#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
 
int n, m, k;
vector<vector<pair<int,int>>> g;
vector<vector<int>> dist; 
const int INF = 9e15;
 
void dij()
{
	
	priority_queue <
	  pair<int,int>, 
	  vector<pair<int,int>>, 
	  greater<pair<int,int>>
	> pq; 
 
	pq.push({0,1});
 
	while(!pq.empty())
	{
		int u = pq.top().second;
		int d = pq.top().first;
		pq.pop();
		
		if(dist[u][k-1] < d) continue;
 
		for(auto e: g[u])
		{
			int v = e.first;
			int c = e.second;
 
			if(dist[v][k-1] > c+d) 
			{
				dist[v][k-1] = c+d;
				pq.push({dist[v][k-1], v});
				sort(dist[v].begin(), dist[v].end());
			}
		}
	}
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m >> k;
	g.resize(n+1);
	dist.resize(n+1);
	for(int i = 1; i <= n; i++)
	{
		dist[i].resize(k);
		for(int j = 0; j <k; ++j)
		{
			dist[i][j] = INF;
		}
	}
	dist[1][0] = 0;
	for(int i = 0; i < m; ++i)
	{
		int u, v, c;
		cin >> u >> v >> c;
		g[u].push_back({v,c});
	}
	
	dij();
 
	for(int i = 0; i < k; ++i)
	{
		cout << dist[n-1][i] << " ";
	}
}
