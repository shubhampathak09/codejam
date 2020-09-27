// digit dp

#include<bits/stdc++.h>
using namespace std;

int number[]={3,2,1,3};
int size=sizeof(number)/sizeof(number);


//int dp[pos][tight][sum];
// max pos can be 20
// so max sum 9*20=180
// tight =2

//therefore
int dp[20][2][180];

void init()
{

for(int i=0;i<20;i++)
{
	for(int j=0;j<2;j++)
	{
		for(int k=0;k<180;k++)
		dp[i][j][k]=-1;
			}
}

}

int gensum(int pos,int tight,int sum)
{
	
	if(pos==size)
	return sum;
    
	if(dp[pos][tight][sum]!=-1)
	return dp[pos][tight][sum];	
	
	else if(tight==1)
{
	for(int i=0;i<=number[pos];i++)
	{
		 if(i==number[pos])
		 {
		 	return dp[pos][tight][sum]=gensum(pos+1,1,sum+i);
		 }
	}
}

else
{
	for(int i=0;i<9;i++)
	{
		return dp[pos][tight][sum]=gensum(pos+1,0,sum+i);
	}
}

}

int main()
{
	 init();
    // cout<<gensum(0,1,0);
	 	
	
}
