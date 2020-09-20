#include<bits/stdc++.h>


using namespace std;

int depth[1000];



void dfs(vector<vector<int>>g,int source,int parent)
{
	depth[source]=0;
	
	for(auto x: g[source])
	{
		if(x!=parent)
		{
			dfs(g,x,source);
			depth[source]=max(depth[source],1+depth[x]);
		}
	}
	
}

int main()
{

int n,m;


cin>>n>>m;
	
vector<vector<int>>g(n+1);

for(int i=0;i<m;i++)
{
	int a,b;
	cin>>a>>b;
	g[a].push_back(b);
	g[b].push_back(a);
	
}

dfs(g,1,0);

for(int i=1;i<=7;i++)
cout<<depth[i]<<endl;


}
