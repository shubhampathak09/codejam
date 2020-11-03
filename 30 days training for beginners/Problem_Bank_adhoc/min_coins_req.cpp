#include<bits/stdc++.h>
using namespace std;

// min coins req


int min_coins(int a[],int n,int sum)
{
	if(sum==0||n==0)
	return 0;
	
	if(sum<0)
	return INT_MAX;
	
	int best=INT_MAX;
	best=min(best,1+min_coins(a,n-1,sum-a[n-1]));
	
	return best;
}

int main()
{
	int coins[]={1,2,3,4};
	
	int target=2;
	
	int n=sizeof(coins)/sizeof(coins[0]);
	
    cout<<min_coins(coins,n,target);
}
