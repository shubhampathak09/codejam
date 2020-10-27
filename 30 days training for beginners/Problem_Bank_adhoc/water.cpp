#include<bits/stdc++.h>
using namespace std;


void findvol()
{
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>>mat(n+1,vector<int>(m+1));
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		cin>>mat[i][j];
	}
	// n=3 m=6
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1||i==n||j==1||j==m)
			continue;
			
			if(issafe(i,j))
			{
				
			}
		}
	}
}

int main()
{
	
	
}
