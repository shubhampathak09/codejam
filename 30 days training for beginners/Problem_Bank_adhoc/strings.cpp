////
//#include<bits/stdc++.h>
//using namespace std;
//
////if first<second ->-1
////if first>second->1
////equal 0
//int lexicographicalstrings(string str1,string str2)
//{
//	
//	int n=str1.length();
//	int m=str2.length();
//	
//	int dp[n+1][m+1];
//	
//	for(int i=0;i<=n;i++)
//	{
//		for(int j=0;j<=m;j++)
//		{
//			if(i==0&&j==0)
//			{
//				dp[i][j]=0;
//			}
//			else if(i==0)
//			dp[i][j]=-1;
//			else if(j==0)
//			dp[i][j]=1;
//			else if(str1[i-1]!=str2[j-1])
//			{
//			
//			if(str1[i-1]-'a'>str2[j-1]-'a')
//			dp[i][j]=1*dp[i-1][j-1];
//			else
//			dp[i][j]=-1;
//		}
//		else
//		{
//			
//			 }	 
//				
//			
//		}
//	
//	}
//	
//	return dp[n][m];
//}
//
//int main()
//{
//	
//	string s1="dbbs";
//	string s2="abbz";
//	
//	
//	cout<<lexicographicalstrings(s1,s2);
//}

// sad  stuff

