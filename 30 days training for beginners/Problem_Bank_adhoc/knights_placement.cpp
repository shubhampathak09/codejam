// Knights solution 
#include<bits/stdc++.h>
using namespace std;
/*     -1,2  
-2,1  
      k
-2,-1
     -1,-2
	 */   
#define N 4

int board[N][N];
int x[]={-1,-2,-2,-1};
int y[]={-2,-1,1,2};

int c;

bool checkqueen(int board[N][N],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++) // check in col
	{
		if(board[i][col]==1)
		return false;
	}
	
	for(i=0;i<col;i++)
	{
		if(board[row][i]==1)
		return false;
	}
	
	for(i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
	if(board[i][j]==1)
	return false;
	
	for(i=row+1,j=col-1;i<N&&j>=0;i++,j--)
	if(board[i][j]==1)
	return false;
	
	return true;
	
}

bool checkKnight(int board[N][N],int row,int col)
{
	
	for(int i=0;i<4;i++)
	{
	    int currx=row,curry=col;
		if(board[currx+x[i]][curry+y[i]]==1&&currx+x[i]>=0&&currx+x[i]<N&&curry+y[i]>=0&&curry+y[i]<N)
		return false;
		
		
	}
	
	return true;
}

void printsol(int board[N][N])
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
	//	c++;
    printsol(board);	
 	return true;
}
    bool res=false;
	for(int i=0;i<=N;i++)
	{
		if(checkqueen(board,i,col))
		{
			board[i][col]=1;
			
			res=solveNqueens(board,col+1)||res;
						
			board[i][col]=0;  // backtrack
		}
	
	}
	
	return res;
}



bool NKnight(int board[N][N],int col)
{
	
	if(col==N)
	{   
	    c++;
		printsol(board);
		return true;
	}
	
	int res=false;
	
	for(int i=0;i<N;i++)
	{
		if(checkKnight(board,i,col))
		{
			board[i][col]=1;
			
			res=NKnight(board,col+1)||res;
			
			board[i][col]=0;
		}
		
	}
	
	return res;
}


void solve()
{
	
	if(NKnight(board,0)==false)
	{
		cout<<"No solution";
		return;
	}
	
	
}

int main()
{
	
	solve();
	cout<<c;

}
