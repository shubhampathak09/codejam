// min jumps but yes or no ie if it is possible to reach end of the array or not
#include<bits/stdc++.h>

using namespace std;


bool jumps_end(int a[],int n)
{
	
	bool dp[n];
	
	dp[0]=1;
	
	for(int i=1;i<n;i++)
	dp[i]=false;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(i<=j+a[j])
			{
				dp[i]=dp[i]||dp[j];
			}
		}
	}
	return dp[n-1];
}

int main()
{
	
		int nums[] = {1, 1, 0, 1};
	
	int n=sizeof(nums)/sizeof(nums[0]);
	
	cout<<jumps_end(nums,n);
	// just yes or no
	// still gives tle for large inpiuts
	//further optimisation req
	
}
