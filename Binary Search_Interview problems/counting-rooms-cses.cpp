#include<bits/stdc++.h>
using namespace std;

vector<vector<bool>>visited;
int n,m;
int rooms;

vector<pair<int,int>>moves={{0,1},{0,-1},{-1,0},{1,0}};

bool issafe(int x,int y)
{
	
	if(x<0||x>=n||y<0||y>=m)
	return false;
	
	if(visited[x][y]==true)
	return false;
	
	return true;
}


void dfs(int x,int y)
{
	visited[x][y]=true;
	for(auto p:moves)
	{
		if(issafe(x+p.first,y+p.second))
		{
			dfs(x+p.first,y+p.second);
		}
	}
	
}


int connectedcomponents()
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(visited[i][j]==false)
			{
				dfs(i,j);
				++rooms;
			}
		}
	}
	
	return rooms;
}

int main()
{
	
	cin>>n>>m;
	
	visited.resize(n);
	
	for(int i=0;i<n;i++)
	visited[i].resize(m);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char ch;
			cin>>ch;
			if(ch== '#')
			visited[i][j]=true;
					
		}
	}
	
	cout<<connectedcomponents();
}
