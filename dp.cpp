#include<bits/stdc++.h>
using namespace std;

#define N 8

bool check(int board[N][N],int row,int col)
{
	
	// check current row to left
	
	for(int i=0;i<col;i++)
	if(board[row][i]==1)
	return false;
	
	// check current col
	for(int i=0;i<row;i++)
	if(board[i][col]==1)
	return false;
	
	return true;
	
}


bool rook_(int board[N][N],int col)
{
	if(col==N)
	{
		printsol(board);
		return true;
	}
	
	int res=0;
	for(int i=0;i<N;i++)
	{
		if(check(board,i,col)==true)
		{
			board[i][col]=1;
			res=res||rook_(board,col+1);
			board[i][col]=0;
		}
		
	}
	return res;
 
}

int main()
{
	
}
