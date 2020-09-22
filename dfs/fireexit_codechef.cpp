// fire exits
#include<bits/stdc++.h>
using namespace std;

int result=1;

//
int countver;

void dfs(int i,vector<vector<int>>g,bool *visited,int &co)
{
	visited[i]=true;
	co++;
	for(auto x: g[i])
	{
		if(visited[x]==false)
		dfs(x,g,visited,co);
	}
	
//	count=c;
}

void connectedcomp(vector<vector<int>>g,int n)
{
	
	
	int count=0;
	bool visited[n];
	
	memset(visited,false,sizeof(visited));
	
	for(int i=1;i<=n;i++)
	{
		int co=0;
		if(visited[i]==false)
		{
		//	result=result*(g[i].size()+1);
			dfs(i,g,visited,co);
			result*=co;
			count++;
		}
	}
	
	cout<<count<<" "<<result;
	
}

int main()
{
	int n=5;
	int m=3;
	
	vector<vector<int>>g(n+1);
	
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

 
 connectedcomp(g,n);
	
}
