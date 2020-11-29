/*we are given n items, where each has a given nonnegative weigth w1,w2,...,wn and value v1,v2,...,vn,
and a knapsack with max weigth capacity W. 
I have to find a subset S of maximum value, subject to two restricions: 1) 
the total weight of the set should not exceed W; 2)
I can't take objects with consecutive index.

For example, with n = 10, possible solutions are {1, 4, 6, 9}, {2, 4, 10} o {1, 10}.

*/

#include<bits/stdc++.h>
using namespace std;


int stnd_knapsack(int wt[],int val[],int w,int n)
{
	
	int dp[n+1][w+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(wt[i-1]<=j)
			{
				dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][w];
}



int modified_knapsack(int wt[],int val[],int w,int n)
{
	
	int dp[n+1][w+1];
	
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=w;j++)
	{
		if(i==0||j==0)
		dp[i][j]=0;
		
		else if(wt[i-1]<=j)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-2][j-wt[i-1]]+val[i-1]);
		}
		else
		dp[i][j]=dp[i-1][j];
	}
}
	
	return dp[n][w];
}
 
int main()
{
	
	int values[]={1,2,3};
	int wt[]={4,5,6};
	
	int n=sizeof(values)/sizeof(values[0]);
	
	
//	cout<<stnd_knapsack(wt,values,3,3);
	
   cout<<modified_knapsack(wt,values,10,3);	
	
}
 
