////mincoins req dp approach 
//
//#include<bits/stdc++.h>
//using namespace std;
//#define INF 1e7+1
//
//int get_mincoins(int coins[],int v,int m)
//{
//	
//	int dp[v+1][m+1];
//	
//	memset(dp,INT_MAX+1,sizeof(dp));
//	
//	dp[0][0]=0;
//	
//	for(int i=0;i<=m;i++)
//	dp[i][0]=0;
//	
//	for(int i=1;i<=v;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			if(coins[j-1]<=i)
//			{
//				cout<<j<<" "<<coins[j-1]<<" "<<i<<" "<<i-coins[j-1]<<"\n";
//				dp[i][j]=min(dp[i][j],1+dp[i-coins[j-1]][j]);
//			}
//			else
//			dp[i][j]=dp[i-1][j];
//		}   // 	int coins[]={2,3,5,6};  v=11
//	}
//	return dp[v][m];
//}
//
//
//int main()
//{
//	
//	int coins[]={2,3,5,6};
//	int m=sizeof(coins)/sizeof(coins[0]);
//	
//	int v=11;
//	
//	cout<<get_mincoins(coins,v,m);
//	
//	
//}

// to be reviewd???????????????????????????????/
