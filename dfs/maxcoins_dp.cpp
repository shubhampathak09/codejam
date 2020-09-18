//// max ways for coin change
//#include<bits/stdc++.h>
//using namespace std;
//
//int maxways(int coins[],int sum,int n)
//{
//	
//	int dp[n+1][sum+1];
//	
//  for(int i=0;i<=n;i++)
//  dp[i][0]=1;
//  
//  for(int i=1;i<=sum;i++)
//	dp[0][i]=0;
//	
//	for(int i=1;i<=sum;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(coins[j-1]<=i)
//			{
//				dp[i][j]=dp[i-coins[j-1]][j]+dp[i][j-1];
//			}
//			else
//			dp[i][j]=dp[i][j-1];
//		}
//	}
//	return dp[n][sum];
//}
//
//
//int main()
//{
//	
//	int coins[]={1,2,3,4};
//	int n=4;
//	int sum=5;
//	cout<<maxways(coins,sum,n);
//	
//}

// to be reviewd
