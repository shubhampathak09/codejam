
#include<bits/stdc++.h>
using namespace std;

#define R 4
#define C 4

int bfssource(char matrix[R][C],int srcx,int srcy,bool visited[R][C])
{
	
//	int distance=0;
	
	//pair<int,int>p={srcx,srcy};
	queue<pair<pair<int,int>,int>>q;
	q.push({{srcx,srcy},0});
	
	visited[srcx][srcy]=1;
	int dx[]={0,1,0,-1};
	int dy[]={1,0,-1,0};
	while(!q.empty())
	{
		
		pair<pair<int,int>,int>p=q.front();
		int currx=q.front().first.first;
		int cuury=q.front().first.second;
		q.pop();
		
		for(int i=0;i<4;i++)
		{
			
			int x=currx+dx[i];
			int y=cuury+dy[i];
			if(visited[x][y]==0&&x>=0&&x<R&&y>=0&&y<C&&matrix[x][y]!='0')
			{
				visited[x][y]=1;
				p.second++;
				
				if(matrix[x][y]=='d')
				return p.second;
				
				q.push({{x,y},p.second});
				
				
			}
		}
	}
	
	return -1;
}

int main()
{
	
	char matrix[R][C]={{'0','*','0','s'},{'*','0','*','*'},{'0','*','*','*'},{'d','*','*','*'}};
	
	//cout<<matrix[0][3];
	
	int srcx=0;
	
	int srcy=3;
	
	bool visited[R][C];
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		visited[i][j]=0;
	}
	
	cout<<bfssource(matrix,srcx,srcy,visited);
	
	
	// why wee need a distance count within the pair and wy cant we use a seperate like we don in graphs>>>>>>>
	
}
