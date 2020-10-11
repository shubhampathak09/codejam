// // counting rooms 
// 
// 
// #include<bits/stdc++.h>
// using namespace std;
//
//vector<pair<int,int>>moves={{-1,0},{1,0},{0,1},{0,-1}};
//vector<vector<bool>>vis;
//
//int n,m,room; // n col m rows
//char grid[1000][1000];
////vector<vector<char>>grid(n,vector<char>(m));
//
//bool isvalid(int x,int y)
//{
//	if(x<0||x>=n||y<0||y>=m||grid[x][y]=='#')
//	return false;
//	if(vis[x][y])
//	return false;
//	
//	return true;
// } 
// 
//void dfs(char grid[1000][1000],int x,int y)
//{
//	vis[x][y]=true;
//	for(auto loc:moves)
//	{
//		int xnew=x+loc.first;
//		int ynew=y+loc.second;
//		if(isvalid(xnew,ynew))
//		dfs(grid,xnew,ynew);
//	}
//}
// 
// int countroom(char grid[1000][1000])
// {
// 	int count=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<m;j++)
// 		{   if(vis[i][j]==false)
// 		{
//		 
// 			dfs(grid,i,j);
// 			count++;
// 		}
//		 }
//	 }
//	 return count;
// }
// 
// /*
// 5 8
//########
//#..#...#
//####.#.#
//#..#...#
//########
//*/ 
// 
// int main()
// {
// cin>>n>>m;
// //char grid[n][m];
// 
// for(int i=0;i<n;i++)
// {
// 	for(int j=0;j<m;j++)
// 	{
// 		cin>>grid[i][j];
// 		if(grid[i][j]='#')
// 		vis[i][j]=true;
//	 }
//  } 
// 
// cout<<"The number of rooms are.."<<countroom(grid);
// 
// }



#include<bits/stdc++.h>
using namespace std;

vector<vector<bool>>visited;
int n,m;
int rooms;

vector<pair<int,int>>moves={{-1,0},{1,0},{0,-1},{0,1}};

bool isvalid(int x,int y)
{
	if(x<0||x>=n||y<0||y>=m)
	return false;
	
	if(visited[x][y]==true)  ///expres=something in if is corrrect took me 2 hr to dubug this pls extra care in future
	return false;
	
	return true;
	
}

void dfs(int i,int j)
{
	visited[i][j]=true;
	for(auto p:moves)
	{
		if(isvalid(i+p.first,j+p.second))
		dfs(i+p.first,j+p.second);
	}
}

int connectedcomponents()
{
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(visited[i][j]==false)
			{   
			   // visited[i][j]=true;
				dfs(i,j);
				++count;
			}
		}
	}
	 return count;
}
int main()
{
	
	cin>>n>>m;
	
	
	visited.resize(n);
	
	for(int i=0;i<n;i++)
	{
		visited[i].resize(m);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char c;
			cin>>c;
			if(c=='#')
			{
			
			visited[i][j]=true;
		}
		}
	}
	
	cout<<connectedcomponents();
	
	
	
}
