// spoh gone

// sum of whose digit is a prime number
//
// range ->10^8
//max number of digits is 8
// 9 9 9 9 9 9 9  9*8=72

#include<bits/stdc++.h>


using namespace std;

long long dp[10][80][2];


long long prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};

bool check(int i)
{
	for(auto x:prime)
	{
		if(x==i)
		return 1;
	}
	return 0;
}

long long g(string str,long long pos=0,long long sum=0,long long tight=1)
{
	
	if(pos==str.length())
	{
		if(check(sum))
		return 1;
		else
		return 0;
	}
	
	else if(dp[pos][sum][tight]!=-1)
	return dp[pos][sum][tight];
	
	else if(tight==1)
	{
		long long result=0;
		for(long long i=0;i<=str[pos]-'0';i++)
		{
			if(i==str[pos]-'0')
			{
				 result+=g(str,pos+1,sum+i,1);
			}
			else
			{
				 result+=g(str,pos+1,sum+i,0);
			}
			
		}
		dp[pos][sum][tight]=result;
		return result;
	}
	else
	{
		long long result=0;
		for(int i=0;i<=9;i++)
		{
			result+=g(str,pos+1,sum+i,0);
		}
		dp[pos][sum][tight]=result;
		return result;
	}
	
}

int main()
{
	
	long long t;
	cin>>t;
	while(t--)
	{
		long long l,r;
		cin>>l>>r;
		l=l-1;
		string a=to_string(l);
		string b=to_string(r);
		memset(dp,-1,sizeof(dp));
		long long ans1=g(a);
		
		memset(dp,-1,sizeof(dp));
		
		long long ans2=g(b);
		
		cout<<ans2-ans1<<endl;
	}
	
}

