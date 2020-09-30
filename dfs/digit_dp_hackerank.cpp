// Hackearth digit dp
// benny and cycles

#include<bits/stdc++.h>
using namespace std;

long long dp[11][2][2];  // pos,..tight.flag

long long calthree(string str,long long pos=0,long long tight=1,long long flag=0)
{
	
	if(pos==str.length())
	{
		if(flag==1)
		return 1;
		else
		return 0;
	}
	
	else if(dp[pos][tight][flag]!=-1)
	return dp[pos][tight][flag];
	
	else if(tight==1)
{
	long long res=0;
	for(long long i=0;i<=str[pos];i++)
	{
		long long flg=flag;
		if(i==3)
		flg=1;
		if(i==str[pos]-'0')
		res+=calthree(str,pos+1,1,flg);
		else
		res+=calthree(str,pos+1,0,flg); 
	}
	return dp[pos][tight][flag]=res;
}

else
{
	long long res=0;
	for(long long i=0;i<=9;i++)
	{
		long long flg=flag;
		if(i==3)
		flg=1;
		res+=calthree(str,pos+1,0,flg);
	}
	return dp[pos][tight][flag]=res;
}
	
}

int main()
{
	
	 
	long long n;
	cin>>n;
	string s=to_string(n);
	
	memset(dp,-1,sizeof(dp));
	
	cout<<calthree(s);
	
	
}
