//Sieve of eratoshenes
#include<bits/stdc++.h>
using namespace std;

int is_prime[1000001];


void seive()
{
	int maxn=100000;
	
	for(int i=1;i<=maxn;i++)
	is_prime[i]=1;
	
	is_prime[0]=is_prime[1]=0;
	
	
	for(int i=2;i*i<=maxn;i++)
	{
		
		if(is_prime[i]==1)
		{
			for(int j=i*i;j<=maxn;j+=i)
			is_prime[j]=0;
		}
	}
}

int main()
{
	
	seive();
	
	for(int i=0;i<=500;i++)
	{
		if(is_prime[i])
		{
			cout<<i<<"\n";
		}
	}
	
}
