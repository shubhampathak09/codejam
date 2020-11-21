#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int findwats(int x,int f,int d)
{
	// base case
	
	
	if(x==0&&d==0)
	return 1;
	
	if(x<0||d<=0)
	return 0;
	
	if(dp[x][d]!=-1)
	return dp[x][d];
	
     int ways=0;
     
     for(int i=1;i<=f;i++)
     {
     	ways+=findwats(x-i,f,d-1);
	 }
     
     return dp[x][d]=ways;
	//return 1+findwats(x-1,f,d-1); 
	
}

int main()
{
	memset(dp,-1,sizeof(dp));
	cout<<findwats(7,6,2);
}
