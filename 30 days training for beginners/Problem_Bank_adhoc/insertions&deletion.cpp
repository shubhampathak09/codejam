#include<bits/stdc++.h>
using namespace std;

void find_deletion_insertion(string s1,string s2)  // s1->s2
{

int m=s1.length();
int n=s2.length();

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
	int lcs_length=dp[m][n];
	
	int deletion=m-lcs_length;
	
	int insertion=n-lcs_length;
	
	
	cout<<"deletion required:- "<<deletion<<endl;
	
	cout<<"insertion required:- "<<insertion<<endl;
}
	
int main()
{
	cout<<"#Test case 1"<<endl;
	
	string s1="heap";
	
	string s2="pea";
	
	find_deletion_insertion(s1,s2);
	
	
	cout<<"#Tes case 2"<<endl;
	
	
	string s3="geeksforgeeks";
	
	string s4="geeks";
	
	find_deletion_insertion(s3,s4);
}
