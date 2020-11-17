// apple man and easy task

#include<bits/stdc++.h>
using namespace std;

char grid[100][100];

int checkadjacent(int x,int y,int n,char grid[100][100])
{
	int sum=0;
	if(x>=0&&x<n&&y+1>=0&&y+1<n&&grid[x][y+1]=='o')
	{
		sum++;
	}
	if(x+1>=0&&x<n&&y>=0&&y<n&&grid[x+1][y])
	{
		sum++;
	}
	return sum;
}

void solve()
{
	int n;
	
	cin>>n;
	
	int t=0;
	char maze[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		
		cin>>grid[i][j];
	}
	
}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		
		t+=checkadjacent(i,j,n,grid);
	}
}

if(t&1)
cout<<"no";
else
cout<<"yes";

}

int main()
{
	

solve();	
}


/*
3
x x o   0 2 0
x o x   2 0 2
o x x   0 2 0 
*/
