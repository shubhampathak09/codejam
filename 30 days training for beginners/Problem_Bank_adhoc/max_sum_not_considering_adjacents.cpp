// max sum obtained by not considering the adjacent elements

#include<bits/stdc++.h>

using namespace std;

int cal_sum(int a[],int n)
{
 int dp[n];
 
 dp[0]=a[0];
 dp[1]=max(dp[0],dp[1]);
 
 for(int i=2;i<n;i++)
 {
 	dp[i]=max(dp[i-1],a[i]+dp[i-2]);
  }
 
 return dp[n-1]; 
   
}

int main()
{
	
	int a[]={5,5,10,100,10,5};
 
//    int a[]={1,2,3};
 
 //    int a[]={1,20,3};
 	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<cal_sum(a,n);
 
	
	
}
