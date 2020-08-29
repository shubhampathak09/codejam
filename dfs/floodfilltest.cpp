
#include<bits/stdc++.h>
using namespace std;

#define M 8
#define N 8

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};


void floodfill(int x, int y,int newC,int prevC,int screen[M][N])
{
	queue<pair<int,int>>q;
//	pair<int,int>q;
	 q.push({x,y});
	 
	 while(!q.empty())
	 {
	 	int currx=q.front().first;
	 	int curry=q.front().second;
	 	q.pop();
	 	screen[currx][curry]=newC;
	 	for(int i=0;i<4;i++)
	 	{
		 
	 	if(currx+dx[i]<0||curry+dx[i]>=M||curry+dy[i]<0||curry+dy[i]>=N)
	 	continue;
	 	if(screen[currx+dx[i]][curry+dy[i]]!=prevC)
	 	continue;
	 	if(screen[currx+dx[i]][curry+dy[i]]==newC)
	 	continue;
	 	
	 	q.push({currx+dx[i],curry+dy[i]});
	 }
	 }
}

int main()
{

int screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1}, 
                      {1, 1, 1, 1, 1, 1, 0, 0}, 
                      {1, 0, 0, 1, 1, 0, 1, 1}, 
                      {1, 2, 2, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 2, 2, 0}, 
                      {1, 1, 1, 1, 1, 2, 1, 1}, 
                      {1, 1, 1, 1, 1, 2, 2, 1}, 
                     }; 	
	
	int x=4,y=4;
	int newC=3;
	int prevC=screen[x][y];
    
	
		for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		cout<<screen[i][j]<<"\t";
		cout<<"\n";
	}
		
	
	floodfill(x,y,newC,prevC,screen);
	

	cout<<endl;
	
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		cout<<screen[i][j]<<"\t";
		cout<<"\n";
	}
//	cout<<"\n";
}
