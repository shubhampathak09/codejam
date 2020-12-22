// palindrome partitoning standarad iptimisation
// check out channel algorithms wioth attitude
#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

bool checkpalin(string s,int i,int j)
{
	if(i==j)
	return true;
	
	if(i>j)
	return true;
	
	while(i<j)
	{
		if(s[i]!=s[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}


int solve(string s,int i,int j)
{
	if(i>=j)
	return 0;
	
	if(checkpalin(s,i,j)==true)
	return 0;
    
    if(dp[i][j]!=-1)
    return dp[i][j];
    
	int ans=INT_MAX;
		
	for(int k=i;k<=j-1;k++)
	{
		int tempans=solve(s,i,k)+solve(s,k+1,j)+1;
		if(tempans<ans)
		{
			ans=tempans;
		}
	}
	return dp[i][j]=ans;
}

int main()
{
	
	string s="geek";
	
	int i=0;
	
	int j=3;
	
	memset(dp,-1,sizeof(dp));
	
	cout<<solve(s,i,j);
	
}
