// rotten oranges
#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>&grid)

{
	
	int freshor=0;
	queue<pair<int,int>>q;
// iterate over grid and get count of fresh oranges
for(int i=0;i<grid.size();i++)
{
	for(int j=0;j<grid[i].size();j++)
	{
		if(grid[i][j]==1)
		{
		
		freshor++;
//		cout<<freshor<<endl;
	}
		if(grid[i][j]==2)
		q.push({i,j});
	}
	}	
	
//	cout<<freshor<<endl;
	
	int time=-1;
	int dx[]={1,0,-1,0};
	int dy[]={0,1,0,-1};
	while(!q.empty()&&freshor>0)
	{
		pair<int,int>p=q.front();
		q.pop();
		for(int k=0;k<4;k++)
		{
			int xtop=p.first+dx[k];
			int ytop=p.second+dy[k];
			if(xtop>=0&&xtop<grid.size()&&ytop>=0&&ytop<grid[0].size()&&grid[xtop][ytop]==1)
			{
				time++;
			//	cout<<time;
				cout<<endl;
				grid[xtop][ytop]=2;
				freshor--;
			//	cout<<freshor<<endl;
				q.push({xtop,ytop});
				
			}
		}
	 //cout<<freshor;
		
	}



return time;
}

int main()
{
	vector<vector<int>>maze={{2,1,1},{0,1,1},{1,0,1}};
	
	cout<<solve(maze);
}
