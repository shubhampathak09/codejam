#include<bits/stdc++.h>
using namespace std;

#define N 4

int board[N][N];

bool isvalid(int row,int col,int board[N][N])
{
	
	// asumming left side queens have been placed ,if possiblw to place a queen at current row,col

   // check this row
   int i,j;
   for(int i=0;i<col;i++)
   if(board[row][i]==1)
   return false;
   
   for(i=row-1,j=col-1;i>=0&&j>=0;i--,j-- )
   if(board[i][j])
   return false;
   
   for(i=row+1,j=col-1;i<N&&j>=0;i++,j--)
   if(board[i][j])
   return false;	
   
   return true;
}

void printboard(int board[N][N])
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
bool solveNqueens(int board[N][N],int col)
{
	if(col>=N)
	{
    printboard(board);	
 	return true;
}
    bool res=false;
	for(int i=0;i<=N;i++)
	{
		if(isvalid(i,col,board))
		{
			board[i][col]=1;
			
			res=solveNqueens(board,col+1)||res;
						
			board[i][col]=0;  // backtrack
		}
	
	}
	
	return res;
}

void solve()
{
	
//	int board[N][N]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

 //   memset(board,0,sizeof(board));
	
	if(solveNqueens(board,0)==false)
	{
		cout<<"No solution";
	}
	
	return; 
}

int main()
{
	
	solve();	
}
