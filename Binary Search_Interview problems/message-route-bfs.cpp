
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>g;
vector<int>path;
vector<bool>visited;


void bfs(int n)
{
	
	visited[1]=true;
	queue<int>q;
	q.push(1);
	
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		
		for(auto x:g[u])
		{
			if(visited[x]==false)
			{
				visited[x]=true;
				path[x]=u;
				q.push(x);
			}
		}
	}
	
	
	
	
	int curr=n;
	stack<int>s;
	while(curr!=-1)
	{
		s.push(curr);
		curr=path[curr];
	}
	cout<<"Number of connections on shortest path.."<<s.size()<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

int main()
{
	int n,m;
	
	cin>>n>>m;
	
	g.resize(n+1);
	visited.resize(n+1);
	path.resize(n+1);
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

for(int i=1;i<=n;i++)
{
	path[i]=-1;
}

bfs(n);
	
}
