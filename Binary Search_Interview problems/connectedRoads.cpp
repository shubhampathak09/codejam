#include<bits/stdc++.h>
using namespace std;

vector<int>roads;
vector<vector<int>>g(1000);
vector<bool>visited(1000);


void dfs(vector<vector<int>>g,int source)
{
	visited[source]=1;
	for(auto x: g[source])
	{
		if(visited[x]==false)
		dfs(g,x);
	}
}

int connectedcomponents(int n)
{
	int rs=0;
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==false)
		{
			dfs(g,i);
			roads.push_back(i);
			rs++;
		}
	}
	
	return rs;
}

int main()
{
int n,m;
cin>>n>>m;

for(int i=0;i<m;i++)
{
	int a,b;
	cin>>a>>b;
	g[a].push_back(b);
	g[b].push_back(a);
	
	}	

int fin=connectedcomponents(n);

cout<<"Number of connected components.."<<fin<<endl;

cout<<"Min roads req to connec these components.."<<fin-1<<endl;

cout<<"Printing the path after roads added..";

for(auto x :roads)
{
	cout<<x<<" ";
}
	
}
