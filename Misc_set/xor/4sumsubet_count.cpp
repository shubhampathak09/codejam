// count the number of 4 sum subsets

#include<bits/stdc++.h>
using namespace std;


int foursumsubset(int a[],int n,int sum,int co)
{
	if(co==4&&sum==0)
	return 1;
	
	if(n==0||co>4)
	return 0;
	
	
	return foursumsubset(a,n-1,sum-a[n-1],co++)+foursumsubset(a,n-1,sum,co);
	
}


// 0 4 7 9
//1 3 7 9
//2,4,5,9

int main()
{
	
	int a[]={2,7,4,5,6};
    
	
		
	int s=sizeof(a)/sizeof(a[0]);
	
	
//	memset(dp,-1,sizeof(dp));
	
	cout<<foursumsubset(a,s,22,0);
	
}
