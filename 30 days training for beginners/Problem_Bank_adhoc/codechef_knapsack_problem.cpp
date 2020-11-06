
//I/O
/*

5
1 1
2 2
2 3
2 4
2 5
1       5       6       9       10      12      13      14      15
*/
// optimal cost of knapsack
#include<bits/stdc++.h>
using namespace std;


int knapsack(int val[],int wt[],int n,int w)
{
	
	int dp[n+1][w+1];
	
	memset(dp,-1,sizeof(dp));
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(wt[i-1]>j)
			dp[i][j]=dp[i-1][j];
			
			else
			dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
		}
	}
	
	return dp[n][w];
}

int main()
{
int n;	
cin>>n;  //5

int wt[n];
int val[n];
// 1 1
// 2 2
// 2 3
// 2 4
// 2 5

int m=0;

for(int i=0;i<n;i++)
{

cin>>wt[i]>>val[i];  // weight and cost
m+=wt[i];	 
}

//cout<<m;
// iterate over m and find optimal c or w with max knapsakc cost
for(int c=1;c<=m;c++)
{
	cout<<knapsack(val,wt,n,c)<<"\t";
 } 
	
}
