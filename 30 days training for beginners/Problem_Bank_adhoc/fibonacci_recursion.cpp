#include<bits/stdc++.h>
using namespace std;

int dp[51];

int fib(int n)
{
	
	if(n<=1)
	return n;
    
	if(dp[n]!=-1)
	return dp[n];
		
	return dp[n]=fib(n-1)+fib(n-2);
	
}

int recur_fib(int n)
{
	if(n<=1)
	return n;
	
	return recur_fib(n-1)+recur_fib(n-2);
}
int main()
{
	
	int n;
	cin>>n;
	
	for(int i=0;i<51;i++)
	dp[i]=-1;
	
	cout<<fib(n);
	
}
