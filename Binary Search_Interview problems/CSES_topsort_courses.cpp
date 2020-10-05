//// topological sort
//// first record the indegree
////
//
//vector<int>indegree(100);
//
//
//// medges
//vector<vector<int>>adj(100);
//for(int i=0;i<m;i++)
//{
//	int a,b;
//	cin>>a>>b;
//	
//	adj[a].push_back(b);
//	indegree[b]++;
//}
//// piush all vertices with zero indegree
//vector<int>zerodeg;
//
//for(int i=1;i<=n;i++)
//if(indegree[i]==0)
//zerodeg.push_backk(i)
//
//// process zerodeg
//vector<int>ans;
//while(!zerodeg.empty())
//{
//	int u=zerodeg.top();
//	ans.push_back(u);
//	
//	
//}




// course schedule
// cses algos


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>v(1001);
vector<int>degree(1001);

void algo()
{
	int n,m;
	
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		degree[b]++;
	}
	
	queue<int>q;
	
	for(int i=1;i<=n;i++)
	{
		if(degree[i]==0)
		{
			q.push(i);
		}
	}
	
	vector<int>ans;
	
	while(!q.empty())
	{
		int u=q.front();
		ans.push_back(u);
		q.pop();
		for(auto x:v[u])
		{
			degree[x]=degree[x]-1;
			if(degree[x]==0)
			q.push(x);
		}
		
	}
	
	for(auto x:ans)
    {
    	cout<<x<<" ";
	}
}

int main()
{
	
	algo();
	
	
}
