// 4sum

#include<bits/stdc++.h>
using namespace std;

//
//int main()
//{
//	
//	vector<vector<int>>v={{1,2},{2,3},{3,4},{4,5}}; // 1 +2 +3 +4
//	                                                // 2 +2 +3+ 4
//	                                                // 2*2*2*2
//	
//	int sz=v.size();  //4
//	
////	int k=v[]
//	for(int i=0;i<v[i].size();i++)
//	{
//		int a=v[i][0];
//		 for(int j=0;j<sz;j++)
//		 {
//		 	
//		 }
//	}


// find all quadruples with given sunm
//2,7,4,0,9,5,1,3



int dp[11][100][7];



bool count(int a[],int n,int co,int sum)
{
	
	if(sum==0&&co==4)  //quadruple sum
	return true;
	
	if(co>4||n==0)
	return false;
	
	
	if(dp[n][sum][co]!=-1)
	return dp[n][sum][co];
	
	return dp[n][sum][co]=count(a,n-1,co++,sum-a[n-1])||count(a,n-1,co,sum);  //knapsack
}

	
int main()
{
	
	int a[]={2,7,4,0,9,5,1,3};
	
	int s=sizeof(a)/sizeof(a[0]);
	
	
	memset(dp,-1,sizeof(dp));
	
	cout<<count(a,s,0,20);
	
	
	}	
	
