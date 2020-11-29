#include<bits/stdc++.h>
using namespace std;

# define INF 100000
// min jumps to reach end of array


// if i<=j+a[j]  then it is in range

// min_jumps_array


int min_jumps(int a[],int n)
{

int dp[n]; //a[]={2,1,3,2,3,4,5,1,2,8};

//memset(dp,INF,sizeof(dp));

for(int i=0;i<n;i++)
dp[i]=INF;


dp[0]=0;  //this is start position 



for(int i=1;i<n;i++)
{
	for(int j=0;j<i;j++) // this is important step
	{
		if(i<=j+a[j])
		{
//			cout<<1<<" ";
			dp[i]=min(dp[i],1+dp[j]); // this is recurrance
		}
	}
}
return dp[n-1];	
} 


int main()
{
	
int a[]={2,1,3,2,3,4,5,1,2,8};

int n=sizeof(a)/sizeof(a[0]);

cout<<min_jumps(a,n);	
	
}
