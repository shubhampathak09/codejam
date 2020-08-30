// dfs general depth evaluation
#include<bits/stdc++.h>
using namespace std;

// general depth evaluation

//int ans=0;

int depth(int u,vector<vector<int>>g,vector<bool>visited)
{
    int ans=0;	
	visited[u]=true; 
	if(g[u].size()==0)
	return 0;
	
	
   for(auto x:g[u])
   {
   	if(!visited[x])
   	{
//	visited[x]=true;
  // 	return 1+ max(0,depth(x,g,visited));
        int s=1+depth(x,g,visited);
        ans=max(ans,s);
       // cout<<ans<"\n";
	}   }	
	
	return ans;
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n+1);
	vector<bool>visited(n+1,0);
	for(int i=0;i<m;i++)
	{
	int a,b;
	cin>>a>>b;
	g[a].push_back(b);
	g[b].push_back(a);
		}
		
		cout<<depth(1,g,visited);
	
}
