#include<bits/stdc++.h>
using namespace std;


void dfs(int source,vector<vector<int>>g,bool *visited,int &count)
{
	
	visited[source]=true;
	count++;
	for(auto x:g[source])
	{
		if(visited[x]==false)
		dfs(x,g,visited,count);
	}
	
}


void connectedcomp(vector<vector<int>>g,int n)
{
	int result=1;
	bool visited[n];
	memset(visited,false,sizeof(visited));
	
	for(int i=0;i<n;i++)
	{
		int count=0;
		
		if(visited[i]==false)
		{
			dfs(i,g,visited,count);
			cout<<"No of nodes in this com:"<<count;
			cout<<endl;
			result=result*count;
			cout<<endl;
		}
	}
	
	cout<<result;
}

int main()
{
	int n,m;
	vector<vector<int>>g(n);
	
	
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	connectedcomp(g,n);
}
