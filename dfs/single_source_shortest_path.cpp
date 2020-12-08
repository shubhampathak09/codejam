// Single Source Shortest Path

#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	
	vector<vector<int>>g(101);
	vector<int>dist(100);
	vector<int>parent(100);
	vector<bool>visited(100);
	
	int n,m;
	
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for(int i=1;i<=n;i++)
	{
	
	dist[i]=INT_MAX;
	visited[i]=false;
	//parent[i]=-1;
}
	int src,dest;
	cin>>src>>dest;
	
	dist[src]=0;
	parent[src]=-1;
	visited[src]=true;
    queue<int>q;
    
    q.push(src);
    
    while(!q.empty())
    {
    	
    	int u=q.front();
    	q.pop();
    	
    	for(auto x:g[u])
    	{
    		if(visited[x]==false)
    		{
    			//cout<<"here";
			visited[x]=true;
    		dist[x]=1+dist[u];
    		parent[x]=u;
    		q.push(x);
    	}
		}
	}
	
	
	if(dist[dest]==INT_MAX)
	{
		cout<<"path to destinaton does not exist";
	}
	else
	{
		cout<<dist[dest]<<endl;
		stack<int>s;
		int i=dest;
		while(i!=-1)
		{
			s.push(i);
			i=parent[i];
		}
		while(!s.empty())
		{
			cout<<s.top()<<" ";
			s.pop();
		}
	}
}

int main()
{
	
	solve();
}
/*
8 10
1 2
1 3
2 4
3 6
3 5
6 5
6 7
5 7
5 8
7 8
1 6
2
1 3 6
--------------------------------
Process exited after 64.51 seconds with return value 0
Press any key to continue . . .
*/
