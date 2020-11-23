// N queens problem
#include<bits/stdc++.h>
using namespace std;

#define N 8



void printsolution(int board[N][N])
{
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}

bool issafe(int board[N][N],int row,int col)
{
	int i ,j;
	for(i=0;i<=col-1;i++)
	{
		if(board[row][i])
		return false;
	}
	
	for(i=row,j=col;i>=0&&j>=0;i--,j--)
	if(board[i][j])
	return false;
	
	for(i=row,j=col;i<N&&j>=0;i++,j--)
	if(board[i][j])
	return false;
    
    return true;
    	
}
bool solveNqueen(int board[N][N],int col)
{
	if(col>=N)
	return true;
	
	for(int i=0;i<N;i++)
	{
		// can be placed i col
		if(issafe(board,i,col))
		{
			board[i][col]=1;
		
		if(solveNqueen(board,col+1))
		return true;
		
		board[i][col]=0; //backtrack
	}
}
return false;
}

void solve()
{
	int board[N][N]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	
	if(solveNqueen(board,0)==false)
	{		
		cout<<"No solution";
	}
	
	else
	{
		printsolution(board);
	}
}

int main()
{
	
	solve();
	
}
