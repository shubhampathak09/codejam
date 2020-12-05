// min jumps array
#include<bits/stdc++.h>
using namespace std;


int min_jumps(int a[],int n)
{
	
	int jumps[n];
	
	jumps[0]=0;
	for(int i=1;i<n;i++)
	jumps[i]=INT_MAX;
	for(int i=1;i<n;i++)
	{
		
		for(int j=0;j<=i;j++)
		{
			if(i<=a[j]+j)
			{
			  jumps[i]=min(jumps[i],jumps[j]+1);	
			}
			
		}
		
		
	}
	
	return jumps[n-1];
}


int main()
{
	
    	int nums[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	
	int n=sizeof(nums)/sizeof(nums[0]);
	
	cout<<min_jumps(nums,n);
}
