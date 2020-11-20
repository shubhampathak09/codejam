#include<bits/stdc++.h>
using namespace std;

//codechef subset sum
/*
An established group of scientists are working on finding solution to NP hard problems. 
They claim Subset Sum as an NP-hard problem. The problem is to determine whether there exists a subset of a given set S whose sum is a given number K.
You are a computer engineer and you claim to solve this problem given that all numbers
 in the set are non-negative. Given a set S of size N of non-neg integers
 */


/*

Input:
2
5 10
3 4 6 1 9
3 2
1 3 4

Output:
1
0

*/

int subsetsum(vector<int>a,int n,int target)
{
	int dp[n+1][target+1];
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	for(int j=1;j<=target;j++)
	dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=target;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	return dp[n][target];
}

void solve()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		vector<int>a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<subsetsum(a,n,k);
		cout<<endl;
	}
	
}

int main()
{
	
	solve();
}
