//knights tour
#include<bits/stdc++.h>
using namespace std;

#define N 8
int board[N][N];


int nx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int ny[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

bool check(int x,int y,int board[N][N])
{
	if(x>=0&&x<N&&y>=0&&y<N&&board[x][y]==0)
	return true;
	
	return false;
}

void printboard(int board[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j]<<" "<<" ";
		}
		cout<<"\n";
	}//cout<M
}


bool knighttour(int x,int y,int board[N][N],int move)
{
	int i,nextx,nexty;
	if(move==N*N)
	{
		printboard(board);
		return 1;
	}
	
	for(i=0;i<8;i++)
	{
		nextx=x+nx[i];
		nexty=y+ny[i];
		
		if(check(nextx,nexty,board)==true)
		{
			board[nextx][nexty]=move;
			
			if(knighttour(nextx,nexty,board,move+1))
			return 1;
			
			
			board[nextx][nexty]=0;
		}
	}
	return 0;
}


void solve()
{
	if(knighttour(0,0,board,1)==false)
	{
		cout<<"no solution";
	}
	 	
}

int main()
{
	
//memset(board,-1,sizeof(board));
//board[0][0]=0;  //intialisatiz	
solve();
	
	
}
