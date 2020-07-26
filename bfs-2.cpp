// count the cells in matrix whose adjacent cells sum is prime

#include<bits/stdc++.h>
using namespace std;

#define R 3
#define C 4

bool checkprime(int n)
{
	
	if(n==1)
	return false;
	
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

void solve(int mat[R][C])

{
	int count=0;
	int xdir[]={1,0,-1,0};
	int ydir[]={0,1,0,-1};
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			int sum=0;
			for(int k=0;k<4;k++)
			{   if(i+xdir[k]>=0&&i+xdir[k]<R&&j+ydir[k]>=0&&j+ydir[k]<C)
				sum+=mat[i+xdir[k]][j+ydir[k]];
						
			}
				if(checkprime(sum))
				count++;
		}
	}
 cout<<count;
}

int main()
{ 
int grid[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

solve(grid);

}
