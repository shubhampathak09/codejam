#include<bits/stdc++.h>
using namespace std;


// nqueens count solution

#define N 8

int c=0;

int board[N][N];

void print(int board[N][N])
{
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
}

bool issafe(int row,int col,int board[N][N])
{
	int i,j;
	for(i=0;i<col;i++)
	if(board[row][i]==1)
	return false;
	
	for(i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
	if(board[i][j]==1)
	return false;
	
	for(i=row+1,j=col-1;i<N&&j>=0;i++,j--)
	if(board[i][j]==1)
	return false;
	
	return true;
	
}

bool solveKnight(int board[N][N],int col)
{
	
	if(col==N)
	{
		print(board);
		c++;
		return true;
	}
	
	bool res=false;
	for(int i=0;i<N;i++)
	{
		if(issafe(i,col,board))
		{
			board[i][col]=1;
			
			res=solveKnight(board,col+1)||res;
			
			board[i][col]=0;
		}
	}
	return res;
}


void solve()
{
	if(solveKnight(board,0)==false)
	{
		cout<<"No solution";
		return;
	}
	
	cout<<c;
}

int main()
{
	
	solve();
	
	
}
