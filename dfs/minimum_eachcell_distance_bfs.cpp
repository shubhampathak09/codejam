#include<bits/stdc++.h>
using namespace std;

#define R 5
#define C 5


void getcountmatrix(int mat[R][C],int sx,int sy)
{
	
//	cout<<"in";
	mat[sx][sy]=0;
	queue<pair<int,int>>q;
	q.push({sx,sy});
	
	int dx[]={-1,0,1,0,1,-1,-1,1};
	int dy[]={0,1,0,-1,1,1,-1,-1};
	
	
	
	while(!q.empty())
	{
		auto x=q.front();
		q.pop();
		
		
		
		for(int i=0;i<8;i++)
		{
			
			
			int ax=x.first+dx[i];
			int ay=x.second+dy[i];
			
			
			if(mat[ax][ay]==0&&ax>=0&&ax<R&&ay>=0&&ay<C)
			{
				mat[ax][ay]=mat[x.first][x.second]+1;
				q.push({ax,ay});
			}
		}
		
	}
	
	mat[sx][sy]=0;
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
}

int main()
{
	
	
	int mat[R][C];
	
 for(int i=0;i<R;i++)
 {
 	for(int j=0;j<R;j++)
 	{
 		mat[i][j]=0;
	 }
 }
	
	
	getcountmatrix(mat,1,1);
} 
