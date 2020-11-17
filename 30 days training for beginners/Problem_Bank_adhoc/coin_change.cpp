#include<bits/stdc++.h>
using namespace std;



int count_ways(int change,int coins[],int n)
{
	
	if(change==0)
	return 1;
	
	if(n<0)
	return 0;
	
	if(n==0&&change>0)
	return 0;
	// include n-1
	if(coins[n-1]>change)
	return count_ways(change,coins,n-1);
	
	else
	{
		// include n-1 and not include
		return count_ways(change-coins[n-1],coins,n)+count_ways(change,coins,n-1); 
		
	}
	
}

int main()
{
	int a[]={1,2,5};
	int change=11;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<count_ways(change,a,n);
	
}
