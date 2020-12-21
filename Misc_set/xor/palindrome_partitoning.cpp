// palindromic partioning


// very very optimised impl to  pass quality test cases faang interview
#include<bits/stdc++.h>
using namespace std;

static int dp[101][101];



bool checkpalindrome(string s,int i,int j)  // some mistake previously with for
{
 if(i==j)
 return true;
 
 if(i>j)
 return true;
 
 while(i<j)
 {
 	if(s[i]!=s[j])
 	return false;
 	
 	i++;
 	j--;
 }
 
 return true;
}


int solve(string s,int i,int j)
{
	if(i>=j)
	return 0;
	
	if(checkpalindrome(s,i,j)==true)
	return 0;
	
	if(dp[i][j]!=-1)
	return dp[i][j];
	
	int ans=INT_MAX;
	int left,right;
	for(int k=i;k<=j-1;k++)
	{
	    //cout<<checkpalindrome(s,i,k)<<" "<<checkpalindrome(s,k+1,j)<<" ";
		if(dp[i][k]!=-1)
		{
			left=dp[i][k];
			}
			else
			{
				left=solve(s,i,k);
				dp[i][k]=left;
				}
				
		if(dp[k+1][j]!=-1)
		{
			right=dp[k+1][j];
					}
		else
		{
			right=solve(s,k+1,j);
			dp[k+1][j]=right;
								}						
		int tempans=left+right+1;
		if(tempans<ans)
		ans=tempans;
	}
	return dp[i][j]=ans;
}

int main()
{
	string s="geek";
    
	
	memset(dp,-1,sizeof(dp));
		
	int i=0;
	int j=s.length()-1;	
	cout<<solve(s,i,j);
	
	//cout<<checkpalindrome(s,i,j);
}
