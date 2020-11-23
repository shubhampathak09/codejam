// N rooks problem 
//
//#include<bits/stdc++.h>
//using namespace std;
//
//#define N 8
//
//int board[N][N];
//
//int c=0;
//
//
//int sum(int a,int b)
//{
//	cout<<a+b;
//	
//	return a+b;
//}

/*
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
*/
/*
bool checkpos(int board[N][N],int row,int col)
{
	
	int i;
	
	for(i=0;i<col;i++)
	if(board[row][i]==1)
	return false;
	
	for(i=0;i<row;i++)
	if(board[i][col]==1)
	return false;
	
	return true;
}

bool solveRook(int board[N][N],int col)
{
	
	if(col==N)
	{
		c++;
		print(board);
		return true;
	}
	bool res=false;
	for(int i=0;i<N;i++)
	{
		
		if(checkpos(board,i,col))
		{
			
			board[i][col]=1;
			
			res=solveRook(board,col+1)||res;
			
			board[i][col]=0; // trying all other possoble combinations
		}
	}
	
	return res;
}

*/
//
//int main()
//{
////	cout<<1;
//	cout<<sum(4,5);
//}


#include<bits/stdc++.h>
using namespace std;

#define N 8

int board[N][N];


void solve()
{
	if(solveRook(board,0)==false)
	{
		cout<<"No solution";
		return;
	}
	
	cout<<c;
}


int main()
{
//	cout<<1<<endl;
//	cout<<2<<endl;
	
	// will reimplement this later ,stack memory giving me some issues and my compiler making strange noises:p
	
}
