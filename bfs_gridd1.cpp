#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
int shortestpath(char mat[R][C],char s,char dest)

{
	
	// data strucutre for storing source distance
	
	pair<pair<int,int>,int>p;
	
		bool visited[R][C];
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		visited[i][j]=false;
	}
	
	// finding the source cordinates
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(mat[i][j]=='s')
			{
				int srcx=i;
				int srcy=j;
				p={{srcx,srcy},0};
			}
			
			if(mat[i][j]=='0')
			visited[i][j]=true;
		}
	}
	
	// bfs
	
 
	
	int xdir[]={1,0,-1,0};
	int ydir[]={0,1,0,-1};
	string sample="";
	sample+=mat[p.first.first][p.first.second];
	queue<pair<pair<int,int>,int>>q;
	q.push(p);
	while(!q.empty())
	{
		pair<pair<int,int>,int> x=q.front();
		q.pop();
		visited[x.first.first][x.first.second]=true;
		if(mat[x.first.first][x.first.second]=='d')
		{
	   // cout<<sample;	
		return x.second;
	}
		// moving in four directions
		for(int i=0;i<4;i++)
		{
			if(mat[x.first.first+xdir[i]][x.first.second+ydir[i]]!='0'&&x.first.first+xdir[i]>=0&&x.first.first+xdir[i]<R&&x.first.second+ydir[i]>=0&&x.first.second+ydir[i]<C&&!visited[x.first.first+xdir[i]][x.first.second+ydir[i]])
			{
				visited[x.first.first+xdir[i]][x.first.second+ydir[i]]=true;
				sample+=mat[x.first.first+xdir[i]][x.first.second+ydir[i]];
				q.push({{x.first.first+xdir[i],x.first.second+ydir[i]},x.second+1});
			}
		}
	}

return -1;
	
}

int main()
{
	
	char grid[R][C]={{'0','*','0','s'},{'*','0','*','*'},{'0','*','*','*'},{'d','*','*','*'}};
/*	[0 * 0 s]
	[* 0 * *]
	[0 * * *]
	[d * * *]
	*/
	char s='*';
	char d='d';
	cout<<shortestpath(grid,s,d);// 
	cout<<endl;
	
	char grid1[R][C]={{'0','*','0','s'},{'*','0','*','*'},{'0','*','*','*'},{'d','0','0','0'}};
	cout<<shortestpath(grid1,s,d);
}
