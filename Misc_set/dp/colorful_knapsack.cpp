#include<bits/stdc++.h>
using namespace std;


// a classic problem on knapsack

int dp[100][100];
int colorfulknapsack(vector<vector<int>>&colormat,int i,int m ,vector<int>&wt,int kswt,int x)
{
	
	if(i==m)
	{
		return x-kswt;
	}
	
	if(dp[i][kswt]!=-1)
	return dp[i][kswt];
	
	int ans=INT_MAX;
	for(int j=0;j<colormat[i].size();j++)
	{
		int clrwt=wt[colormat[i][j]];
		if(kswt+clrwt<=x)
		{
			ans=min(ans,colorfulknapsack(colormat,i+1,m,wt,kswt+clrwt,x));
		}
	}
	
	return dp[i][kswt]=ans;
	
}


void solve()
{
	int n,m,x;
	cin>>n>>m>>x;
	vector<int>wt(n);
	
	for(int i=0;i<n;i++)
	cin>>wt[i];
	
	vector<int>clr(n);
	for(int i=0;i<n;i++)
	cin>>clr[i];
	
	vector<vector<int>>colormat(m);
	
	for(int i=0;i<n;i++)
	colormat[clr[i]-1].push_back(i);
	
	int ans=colorfulknapsack(colormat,0,m,wt,0,x);
	
	if(ans==INT_MAX)
	{
	
	cout<<-1<<endl;
	return;
}

cout<<ans<<endl;
}

int main()
{
	memset(dp,-1,sizeof(dp));
	solve();
	
	
}
