//
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
//	s="895213515195579575785127587578125387517823587215725755215153988719519859";
//
    cin>>s;	     
	int n=s.length();
	int dp[n+1];
	
	if((s[n-1]-'0')%2==0)
	dp[n]=1;
	else
	dp[n]=0;
	
	for(int i=n-2;i>=0;i--)
	{
		if((s[i]-'0')%2==0)
		dp[i+1]=dp[i+2]+1;
		else
		dp[i+1]=dp[i+2];
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
}
