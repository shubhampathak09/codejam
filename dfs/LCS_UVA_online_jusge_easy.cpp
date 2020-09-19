// uva onlione judge yet another problem on lCS

#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2)
{
	
 int n=s1.length();
 int m=s2.length();
 
 int dp[n+1][m+1];
 
 for(int i=0;i<=n;i++)
 {
 	for(int j=0;j<=m;j++)
 	{
 		if(i==0||j==0)
 		dp[i][j]=0;
 		
 		else if(s1[i-1]==s2[j-1])
 		dp[i][j]=1+dp[i-1][j-1];
 		
 		else
 		dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	 }
 }
	
	return dp[n][m];
}


int main()
{
	string s1="bcacbcabbaccbab";
	
	string s2="bccabccbbabacbc";
	
	cout<<lcs(s1,s2)<<endl;;
	
	cout<<lcs("a1b2c3d4e","zz1yy2xx3ww4vv");
	
	cout<<endl;
	
	cout<<lcs("abcdgh","aedfhr");
	
	cout<<endl;
	
	cout<<lcs("abcdefghijklmnopqrstuvwxyz","a0b0c0d0e0f0g0h0i0j0k0l0m0n0o0p0q0r0s0t0u0v0w0x0y0z0");
	
	cout<<endl;
	
	cout<<lcs("abcdefghijklmnzyxwvutsrqpo","opqrstuvwxyzabcdefghijklmn");
	
	
	
}

