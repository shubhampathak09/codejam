// equal subset partition problem

#include<bits/stdc++.h>
using namespace std;


bool subsetsum(int set[],int W,int n)
{
	
//	int n=sizeof(set)/sizeof(set[0]);
	bool dp[n+1][W+1];
	
	for(int i=0;i<=W;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
     
	//cout<<dp[0][0]; 	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(set[i-1]<=j)
			dp[i][j]=dp[i-1][j]||dp[i-1][j-set[i-1]];
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	 return dp[n][W];
}


bool equalsubsetsum(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=a[i];
	
	if(sum&1)
	return false;
	
	int ask=sum/2;
	
	return subsetsum(a,ask,n);
}

int main()
{
	
	
	int set[]={1,5,11,5};
	int n=sizeof(set)/sizeof(set[0]);
	int set1[]={1,5,3};
	int n1=sizeof(set1)/sizeof(set[0]);
	cout<<equalsubsetsum(set,n);
	cout<<endl;
	cout<<equalsubsetsum(set1,n1);
//	cout<<subsetsum(set,18,n);


}


