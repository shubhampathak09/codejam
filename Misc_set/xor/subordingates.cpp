////#include<bits/stdc++.h>
////using namespace std;
////
////
////int sz[101];
////
////vector<vector<int>>g(101);
////bool visited[101];
////
////void dfs(int source)
////{
////	visited[source]=1;
////	
////	for(auto x:g[source])
////	{
////	  if(visited[x]==false)
////	  {
////	  	dfs(x);
////	  	sz[source]+=sz[x];
////	  	
////		  }	
////	}
////	
////	sz[source]=1;
////}
////
////void solve()
////{
////	
////	int n,m;
////	
////	cin>>n>>m;
////	
////	for(int i=0;i<m;i++)
////	{
////		int a,b;
////		cin>>a>>b;
////		g[a].push_back(b);
////		g[b].push_back(a);
////	}
////	
////	dfs(1);
////	
////	for(int i=1;i<=n;i++)
////	cout<<sz[i]<<" ";
////}
////
////int main()
////{
////	
////	solve();
////	
////	
////}
//
//
//// find number of nodes in subtree
//
//#include<bits/stdc++.h>
//using namespace std;
//
//vector<vector<int>>g(101);
//
////bool visited[101];
//
//int sz[101];
//
//void dfs(int u,bool *visited)
//{
//	
//	visited[u]=1;
//	sz[u]=1;
//	
//	for(auto x:g[u])
//	{
//		if(visited[x]==false)
//		{
//		//	dfs(x);
//		    cout<<x<<" ";
//			dfs(x,visited);	
//		//	sz[u]+=sz[x];
//		}
//	}
//}
//
//void solve()
//{
//	
//	int n,m;
//	
//	cin>>n>>m;
//	
//	for(int i=0;i<m;i++)
//	{
//		int a,b;
//		cin>>a>>b;
//		g[a].push_back(b);
//		g[b].push_back(a);
//		
//	}
//    bool visited[n+1];
//	
//	for(int i=1;i<=n;i++)
//	visited[i]=0;
//	
//	if(visited[1]==false)	
//	dfs(1,visited);
//	
//	for(int i=1;i<=n;i++)
//	cout<<sz[i]<<" ";
//}
//
//int main()
//{
//	
//	
//	solve();
//	
//}


#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>g(101);

bool visited[100];


int sz[101];


void dfs(int src)
{
	
	visited[src]=1;
    sz[src]=1;	
//	cout<<src<<" ";
	
	for(auto x:g[src])
	{
		if(visited[x]==false)
		{
			dfs(x);
			sz[src]+=sz[x];
		}
	}
}

int main()
{
	
	int n,m;
	
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	int src=1;
	
	dfs(src);
    
//	cout<<n;
	for(int i=1;i<=n;i++)
	{
		cout<<sz[i]<<" ";
	}
	
	cout<<endl;	 	
	// now find number oemployess under one guy
	for(int i=1;i<=n;i++)
	{
		cout<<"Subordinates under "<<i<<" "<<sz[i]-1;
		cout<<endl;
	 } 
}
