
// dp on trees
#include<bits/stdc++.h>
using namespace std;


int dp[100];

void dfs(vector<vector<int>>g,int u,int parent,int a[])
{
	
	dp[u]=a[u-1];
	
	int maximum=0;
	
	for(int child:g[u])
	{
		if(child==parent)
		continue;
		
		dfs(g,child,u,a);
		
		maximum=max(dp[child],maximum);
	}
	
	dp[u]+=maximum;
}

int main()
{
	int n=14;
	
	vector<vector<int>>g(n+1);
	
	g[1].push_back(2),g[2].push_back(1);
	g[1].push_back(3),g[3].push_back(1);
	g[1].push_back(4),g[4].push_back(1);
	g[2].push_back(5),g[5].push_back(2);
	g[2].push_back(6),g[6].push_back(2);
	g[3].push_back(7),g[7].push_back(3);
	g[4].push_back(8),g[8].push_back(4);
	g[4].push_back(9),g[9].push_back(4);
	g[5].push_back(11),g[11].push_back(5);
	g[7].push_back(13),g[13].push_back(7);
	g[7].push_back(14),g[14].push_back(7);
	
	int a[]={3,2,1,10,1,3,9,1,5,3,4,5,9,8};
	
	dfs(g,1,0,a);
	
	cout<<dp[1];
	
	
}
