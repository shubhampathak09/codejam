// case 2 if coin supply is limited

// always think about the choice first
//optimisation comes after that
// keep up....17/11/20

//optimal to think about dp from end:p

#include<bits/stdc++.h>
using namespace std;


int count_ways(int coins[],int change,int n)
{
	
	if(change==0)
	return 1;
	
	if(n<0)
	return 0;
	
	if(n==0&&change>0)
	return 0;
	
	
	if(coins[n-1]>change)
	return count_ways(coins,change,n-1);
	
	else
	{
		return count_ways(coins,change-coins[n-1],n-1)+count_ways(coins,change,n-1);
	}
}

int main()
{
	
	int coins[]={1,2,5};
	
	int n=sizeof(coins)/sizeof(coins[0]);
	
	cout<<count_ways(coins,6,n);
	
}
