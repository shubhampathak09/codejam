//[x1,x2,x3
//]
//[1,1,1,1,1]

//1. chose or dont chose
//2. either add check either subtract check
//3.top dow dp?
//s1-s2
//S-s2-s2=S-2s2=k=>S-k/2;
//reduced to subset sum

#include<bits/stdc++.h>
using namespace std;


int targetsum(int a[],int T,int n)
{
	
	if(n==0)
	return 0;
	
	if(T==0)
	return 1;
	
	if(a[n-1]<=T)
	return targetsum(a,T-a[n-1],n-1) +targetsum(a,T,n-1);
	
	else
	return targetsum(a,T,n-1);
}


int main()
{
	
	
	
	
}
