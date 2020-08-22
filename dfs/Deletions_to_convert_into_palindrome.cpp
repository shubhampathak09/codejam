// abdacds  -> dad->a,b,c,s= 7-3
// sdcadba
// aebcbda  -> abcba->e,d= 7-5
// adbcbea

// Minimum deletion required to convert a ting into a palindrome=>insertions+deletions+lcs+lcs+palindrome

#include<bits/stdc++.h>
using namespace std;


int getpalindromelcs(string s1,string s2,int m,int n)
{
	
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	return m-dp[n][m];
}

int main()
{
	
//	string s="shubham";
//	string temp=s;
//	sort(temp.begin(),temp.end());
//	cout<<s<<endl<<temp;

//string s1="aebcbda";

string s="GeeksforGeeks";

//string s2="CAR";  //RAC
string temp=s;
int n=s.length();
reverse(temp.begin(),temp.end());

cout<<"Min Deletions req.."<<getpalindromelcs(s,temp,n,n);


}
