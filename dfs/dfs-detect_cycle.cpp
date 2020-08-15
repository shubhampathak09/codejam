#include<bits/stdc++.h>
using namespace std;



bool dfs(int source,vector<vector<int>>g,bool *visited,vector<int>parent)
{
	 
	visited[source]=true;
	for(auto x:g[source])
	{
		if(visited[x]==false)
		{
			
			visited[x]=true;
			parent[x]=source;
			dfs(x,g,visited,parent);
			
		}
		
		else if(visited[x]==true&&parent[x]!=-1)   // else in place of if be careful please...
		return true;   // indicates back edge hence cycle
		
	}
	
	return false;
	
}





void solve()
{
int n,m;
cin>>n>>m;

vector<int>parent(n+1);
vector<vector<int>>g(n+1);

for(int i=1;i<=n;i++)
parent[i]=-1;

bool visited[n+1];
for(int i=1;i<=n;i++)
visited[n]=false;

for(int i=0;i<m;i++)
{
	int a,b;
	cin>>a>>b;
	g[a].push_back(b);
	g[b].push_back(a);
}
 
bool cycle=dfs(1,g,visited,parent); 
 
if(cycle==true)
cout<<"Cyle is present in graph";
else
cout<<"Cycle is not present";
	


}



int main()
{
	
	solve();
	
}
