// unique paths
#include<bits/stdc++.h>
using namespace std;	

//
//int solution()
//{
//	vector<vector<int>>obstacle;
//	int m,n;
//	cin>>m>>n;
//	
//	
//	
//}


int uniquepaths(vector<vector<int>>&obstacle)
{
//	vector<vector<int>>obstacle;
	int n,m;
	m=obstacle.size();
	n=obstacle[0].size();
	//cin>>n>>m;
	 
	
	int dp[m+1][n+1];
	
	dp[m][n]=obstacle[m-1][n-1]^1;
	
	for(int i=n-1;i>=1;i--)
	{
		if(obstacle[m][i]==1||obstacle[m][i+1]==1)
		dp[m][i]=0;
		else
		dp[m][i]=1;
	}
	
	for(int i=m-1;i>=1;i--)
	{
		if(obstacle[i][n]==1||obstacle[i+1][n]==1)
		dp[i][n]=0;
		else
		dp[i][n]=1;
	}
	
	
	for(int i=m-1;i>=1;i--)
	{
		for(int j=n-1;j>=1;j--)
		{
			
			if(obstacle[i][j]==1)
			dp[i][j]=0;
			else
			dp[i][j]=dp[i+1][j]+dp[i][j+1];
		}
	}
	
	return dp[1][1];
}


int main()
{
//	
//	vector<vector<int>>a={{1,0,1,2,3},{2,2,2,2,4},{3,3,3,3,5},{4,4,4,4,6}};
//	
//	cout<<a.size();  //rows
//	cout<<endl;  
//	cout<<a[0].size();
	
	vector<vector<int>>obstacle={{0,0,1,0},{0,0,0,0},{1,0,0,0},{0,1,0,0}};
//cout<<obstacle.size();
//cout<<obstacle[0].size();	
//cout<<obstacle[3][3];	
int ans=uniquepaths(obstacle);	

cout<<ans;	
	
}
