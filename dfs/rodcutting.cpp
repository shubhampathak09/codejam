#include<bits/stdc++.h>
using namespace std;


int cutrod(int length[],int price[],int L,int n)
{
	
	int dp[n+1][L+1];
    //cout<<n<<L;	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
	 		dp[i][j]=0;
	 		
	        else if(length[i-1]<=j)
			dp[i][j]=max(price[i-1]+dp[i][j-length[i-1]],dp[i-1][j]);
			
			else
			dp[i][j]=dp[i-1][j];		
		}
}
	return dp[n][L];
}

int main()
{
	
	int length[]={1,2,3,4,5,6,7,8};                // wt[]
	int price[]={1,5,8,9,10,17,17,20};           // price[]
	
	int n=sizeof(length)/sizeof(length[0]);
	int L=n;
	cout<<"Max price achieved by cutting the rod.."<<cutrod(length,price,L,n);
	
}
