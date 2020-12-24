//Max sum of node from root to leaf

#include<bits/stdc++.h>
using namespace std;

int dp[101];
void dfs(vector<int>g[],int a[],int u,int parent)
{
	
dp[u]=a[u-1];	

int maxi=0;

for(auto x:g[u])
{
	if(x==parent)
	continue;
	
	dfs(g,a,x,u);
	
	maxi=max(maxi,dp[x]);
	}	
 dp[u]+=maxi;	
}
int main()
{
	
	int n=14;
	int a[]={3,2,1,1,3,9,1,5,3,4,5,9,8};
	vector<int>g[15];
	
	// create graph
	
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	// result will be dp[1];
	
	
	dfs(g,a,1,-1);
	
	cout<<dp[1];
}


/* Pseudocode
dp[u]=a[u-1];
max=0;

for(auto x:g[u])
{
if(x==parent)
continue
dfs(x, parent);
max=max(max,dp[x])
}
dp[u]=dp[u]+maxi
*/
