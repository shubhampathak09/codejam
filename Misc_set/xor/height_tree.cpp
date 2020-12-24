#include<bits/stdc++.h>
using namespace std;


vector<int>g[100];
//bool visited[100];

int height[100];



void dfs(int src,int parent){
	
int h=0;

for(auto x:g[src])
{
	if(x==parent)
	continue;
	
	dfs(x,src);
	h=max(h,height[x]);
	}	
	height[src]=1+h; 
}

void solve()
{
int n,m;

cin>>n>>m;

for(int i=1;i<=m;i++)
{
	int a,b;
	
	cin>>a>>b;
	
	g[a].push_back(b);
	g[b].push_back(a);
	}
	
dfs(1,-1);	
  
cout<<height[1];  		
}

int main()
{
	
	solve();
	
}
