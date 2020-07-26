#include<bits/stdc++.h>
using namespace std;
void bfs(int v,vector<vector<int>>g,bool*visited)
{
//	visited[v]=true;
	queue<int>q;
	q.push(v);
	
    while(!q.empty())
    {
    	int u=q.front();
    	q.pop();
    	visited[u]=true;
    	for(auto x:g[u])
    	{
    		if(visited[x]==false)
    		{
    		//	visited[x]=true;
    			q.push(x);
			}
    	
    		
		}
	}
}

 int connectedComponents(vector<vector<int>>g,int n,bool*visited)
 {
 	int result=0;
 //	bool visited[n+1];
 	for(int i=1;i<=n;i++)
 	{
     if(visited[i]==false)
	 {
	 	bfs(i,g,visited);
	 	result++;
			 }		
	 }
return result;	  
 }
 

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n+1);
	
	bool visited[n+1];
	for(int i=1;i<=n;i++)
	visited[i]=false;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	cout<<connectedComponents(g,n,visited);
}

