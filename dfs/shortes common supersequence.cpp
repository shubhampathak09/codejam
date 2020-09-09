// length of subsequence which must contian lcs was well as common string ouy of them
// s1=apple s2=peach
// appleach
// 5-2 + 5-2
// 3 +2 +3=8=8
// n-lcs +lcs + m-lcs

#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2)
{
	
	int n=s1.length();
	int m=s2.length();
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	
	int i=n,j=m;
//	int k=0;
	string temp="";
	while(i>=0&&j>=0)
	{
		if(s1[i-1]==s2[j-1])
		{
			temp+=s1[i-1];
			i--;
			j--;
		//	k++;
		}
		else if(dp[i-1][j]>dp[i][j-1])
		{
			i--;
		//	k++;
		}
		else
		{
			j--;
		//	k++;
		}
	}
	
	reverse(temp.begin(),temp.end());
	cout<<temp<<temp[1];
	cout<<endl;
	//cout<<1;
	return dp[n][m];
}

int main()
{
	
	string s1="apple";
	string s2="peach";
	
	cout<<lcs(s1,s2);
	
	
}
