#include<bits/stdc++.h>
using namespace std;

// -std=c++11;


#define N 4

int c;
int board[N][N];

bool iscorrect(int row,int col,int board[N][N])
{
	for(int i=0;i<=col;i++)
	{
		if(board[row][i]==1)
		return false;
	}
	
	for(int i=0;i<=row;i++)
	{
		if(board[i][col]==1)
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

bool rooks_util(int col,int board[N][N])
{
	if(col==N)
	{
		c++;
//		cout<<c<<"\t";
		printsol(board);
		return true;
	}
	
	bool res=false;
	for(int i=0;i<N;i++)
	{
		if(iscorrect(i,col,board)==true)
		{
		
		board[i][col]=1;
		
		res=rooks_util(col+1,board)||res;
		
		board[i][col]=0;
	}
	}
	return res;
}


void solve()
{
	if(rooks_util(0,board)==false)
	{
		cout<<"no solution";
	}
	
}

int main()
{
	
	solve();
	cout<<c;
}
