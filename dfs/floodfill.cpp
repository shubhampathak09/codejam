#include<bits/stdc++.h>
using namespace std;

#define M 8
#define N 8


int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void floodfill(int x,int y,int prevC,int newC,int screen[M][N])
{
	
//	cout<<"in";
if(x<0||x>=M||y<0||y>=N)
return;
if(screen[x][y]!=prevC)
return;
if(screen[x][y]==newC)
return;

screen[x][y]=prevC;

for(int i=0;i<4;i++)					  	
{
	floodfill(x+dx[i],y+dy[i],prevC,newC,screen);
	}	
}




int main()
{
	
	
int screen[M][N]= {{1, 1, 1, 1, 1, 1, 1, 1}, 
                      {1, 1, 1, 1, 1, 1, 0, 0}, 
                      {1, 0, 0, 1, 1, 0, 1, 1}, 
                      {1, 2, 2, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 2, 2, 0}, 
                      {1, 1, 1, 1, 1, 2, 1, 1}, 
                      {1, 1, 1, 1, 1, 2, 2, 1}, 
                     };
					 	
int x=4;
int y=4;
int prevC=screen[x][y];
int newC=3;

//cout<<prevC;
// 0 to m-1 and n-1;	

floodfill(x,y,prevC,newC,screen);

for(int i=0;i<M;i++)
{
	for(int j=0;j<N;j++)
	{
		cout<<screen[i][j]<<"\t";
	}
	cout<<"\n";
}
	
}
