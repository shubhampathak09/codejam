// digit dp calculate sum
#include<bits/stdc++.h>
using namespace std;

int dp[6][54][2];

int g(string s1,int pos=0,int sum=0,int tight=1)
{
	
	if(pos==s1.length())
	return sum;
	
	if(dp[pos][sum][tight]!=-1)
	return dp[pos][sum][tight];
	
	
	
	else if(tight==1)
	{
		int ret=0;
		for(int i=0;i<=s1[pos]-'0';i++)
		{
			if(i==s1[pos]-'0')
			{
				ret+=g(s1,pos+1,sum+i,1);
			}
			else
			{
			//	for(int i=0;i<=9;i++)
				
			 ret+=g(s1,pos+1,sum+i,0); 
				
			}
		}
		return dp[pos][sum][tight]=ret;
	}
	else
	{
		int ret=0;
		for(int i=0;i<=9;i++)
		{
		
		ret+=g(s1,pos+1,sum+i,0);
	}
	return dp[pos][sum][tight]=ret;
	}
}
int main()
{
//	a=123;
//	b=1024;
	
	int l,r;
	cin>>l>>r;
	
	l=l-1;
	string a=to_string(l);
	string b=to_string(r);
	
	memset(dp,-1,sizeof(dp));
	
	int ans1=g(a);
	
	memset(dp,-1,sizeof(dp));
	
	int ans2=g(b);
	
	cout<<ans2-ans1;
	
	// 123 1024 i/0
	// 12613    o/p
}
