//#include<bits/stdc++.h>
//using namespace std;
//
//vector<vector<pair<int,int>>>g;
//
//#define inf 1e6
//
//
//void Dijkstras()
//{
//	//input edges and vertices
//	
//	
//	int n,m;
//	cin>>n>>m;
//	g.resize(n+1);
//	for(int i=0;i<m;i++)
//	{
//		int a,b;
//		cin>>a>>b;
//		
//		g[a].push_back({b,-1});
//		
//	}
//	
//	vector<int>parent(n+1);
//	vector<int>dist(n+1);
//	
//	for(int i=1;i<=n;i++)
//	dist[i]=inf;
//	
//	 
//	
//	
//	
//	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//	pq.push({0,1}); //distance and source
//	dist[1]=0;
//	parent[1]=-1;
//	while(!pq.empty())
//	{
//		auto p=pq.top();  // distance ->0 and src
//		pq.pop();
//		for(auto x:g[p.second])
//		{
//			cout<<x.first<<x.second<<" ";
//			if(dist[x.first]>x.second+dist[p.second])
//			{
//				dist[x.first]=x.second+dist[p.second];
//				parent[x.first]=p.second;
//				pq.push({dist[x.first],x.first});
//			}
//		}
//		
//	 } 
//	vector<int>result;
//	 // src
//	int temp=n;
//	while(temp!=-1)
//	{
//		result.push_back(temp);
//		temp=parent[temp];
//	}
//	reverse(result.begin(),result.end());
//	
//	for(auto z:result)
//	cout<<z<<" ";
//	
//}
//
//int main()
//{
//	
//	Dijkstras();
//	
//}



#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<pair<int,int>>>g;
vector<int>dist;
vector<int>par;

void dij()
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({0,1});
	dist[1]=0;
	par[1]=-1;
	
	while(!pq.empty())
	{
		
		int u=pq.top().second;
		int d=pq.top().first;
		pq.pop();
		
		for(auto e:g[u])
		{
			int v=e.first;
			int c=e.second;
			if(dist[v]>c+dist[u])
			{
				dist[v]=c+dist[u];
				pq.push({dist[v],v});
				par[v]=u;
			}
			
		}
		
	}
	
}

int32_t main()
{
	cin>>n>>m;
	dist.resize(n+1);
	par.resize(n+1);
	
	for(int i=1;i<=n;i++)
	par[i]=-1;
	
	g.resize(n+1);
	
	for(int i=0;i<m;i++)
	{
		
		int u,v;
		cin>>u>>v;
		g[u].push_back({v,-1});
		
		
	}
	
	dij();
	 
	int temp=n;
	vector<int>ans;
	while(temp!=-1)
	{
		ans.push_back(temp);
		temp=par[temp];
		
	}
	
	reverse(ans.begin(),ans.end());
	
   
   for(int i=1;i<=n;i++)
   cout<<dist[i]<<" ";
   
   
   cout<<endl;
   
   int mn;
   
   for(int i=1;i<=n;i++)
   {
   	mn=min(mn,dist[i]);
   }
   cout<<"Length of Lonhest Directd acyclic graph path is.."<<mn;
   
}
