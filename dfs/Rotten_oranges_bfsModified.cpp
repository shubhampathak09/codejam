
#include<bits/stdc++.h>
using namespace std;

int grid[3][3]={{2,1,1},{1,1,0},{0,1,1}};

int grid1[1][2]={{0,2}};

int rottenoranges(int grid[][3])
{
	
	queue<pair<int,int>>q;
	int fresh=0;
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		if(grid[i][j]==2)
		q.push({i,j});
		else if(grid[i][j]==1)
		fresh++;
	}
	}	
	
	if(fresh==0)
	return -1;
	
	
	int dx[]={-1,0,1,0};
	int dy[]={0,1,0,-1};
	int min=0;
	while(!q.empty())
	{
		int size=q.size();
	//	cout<<size<<endl;
		for(int i=0;i<size;i++)
		{
			
			pair<int,int>p=q.front();
			q.pop();
			int x=p.first;
			int y=p.second;
			for(int i=0;i<4;i++)
			{
				if(x+dx[i]>=0&&x+dx[i]<=2&&y+dy[i]>=0&&y+dy[i]<=2&&grid[x+dx[i]][y+dy[i]]==1)
				{
					grid[x+dx[i]][y+dy[i]]=2;
					q.push({x+dx[i],y+dy[i]});
				}
				else 
				continue;
			}
		}
		min++;
	}
	min=min-1;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		if(grid[i][j]==1)
		return -1;
	}
	
	return min;
}
int main()
{
	
	cout<<rottenoranges(grid);
	
}
