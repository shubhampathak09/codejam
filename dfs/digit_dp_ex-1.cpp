// given two numbers a and b the task is to print sum of digts of all numbers appearing betwwen the,

#include<bits/stdc++.h>
using namespace std;

// a=5
// b=11

int dp[4][2][36];



int getsum(string a,int pos=0,int tight=1,int sum=0)
{
	
	if(pos==a.length())
	{
		return sum;
	}
	
	if(dp[pos][tight][sum]!=-1)
	return dp[pos][tight][sum];
	
	else if(tight==1)
	{
		int sumres=0;
		for(int i=0;i<=a[pos]-'0';i++)
		{
			if(i==a[pos])
			{
				return dp[pos][tight][sum]= getsum(a,pos+1,1,sum+i);
			}
			else
			{
				return dp[pos][tight][sum]= getsum(a,pos+1,0,sum+i);
			}
		}
		
	//	return dp[pos][tight][sum]=sumres;
	}
	else
	{
		for(int i=0;i<=9;i++)
		{
			return dp[pos][tight][sum]=getsum(a,pos+1,0,sum+i);
		}
	}
	
}

int main()
{

//
//int a,b;
//cin>>a>>b;
//
//string s1=to_string(a);
//string s2=to_string(b);

int l,r;

cin>>l>>r;

l=l-1;
string a=to_string(l);
string b=to_string(r);

memset(dp,-1,sizeof(dp));

int ans1=getsum(a);
int ans2=getsum(b);

cout<<ans2-ans1;	
	
}
