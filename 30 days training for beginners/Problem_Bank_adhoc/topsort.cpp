#include<bits/stdc++.h>
using namespace std;


void dfs(int v,bool visited[],stack<int>&s,vector<vector<int>>g)
{
	visited[v]=true;
	for(auto x:g[v])
	{
		if(visited[x]==false)
		dfs(x,visited,s,g);
	}
    
    s.push(v);
}

void topsort(vector<vector<int>>g,int n)
{
	bool visited[n];
	for(int i=0;i<n;i++)
	visited[i]=false;
	
	stack<int>st;
	
	for(int i=0;i<n;i++)
	{   if(visited[i]==false)  ///redundant mistake ? why check if not visited then call dfs as previous dfs call changes the visited array"p
		dfs(i,visited,st,g);
	}
	
//	cout<<s.size();
	
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main()
{

int n,m;

cin>>n>>m;	
	
vector<vector<int>>g(n);	

for(int i=0;i<m;i++)
{
	int a,b;
	cin>>a>>b;
	g[a].push_back(b);
//	g[b].push_back(a);
}
	
topsort(g,n);

	
}
