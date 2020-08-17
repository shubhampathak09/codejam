#include<bits/stdc++.h>
using namespace std;

int largestsqmat(vector<vector<char>>&matrix)
{
	int r=matrix.size();
	int c=matrix[0].size();
	
	vector<vector<int>>dp(r,vector<int>(c,0));
	int ans=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==0||j==0)
			{
				if(matrix[i][j]-'0'==1)
				dp[i][j]=1;
			}
			if(i>0&&j>0&&matrix[i][j]-'0'==1)
			dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
			ans=max(ans,dp[i][j]);
		}
	}
	return ans;
}

int main()
{
vector<vector<char>>v{{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};

cout<<"Side is.."<<largestsqmat(v)<<endl;
cout<<"Area is.."<<largestsqmat(v)*largestsqmat(v);	
}


