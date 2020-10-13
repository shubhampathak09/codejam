// sieve of eratosthenes

// implementing sieve

#include<bits/stdc++.h>
using namespace std;


int is_prime[1000001];

void sieve()
{
	 int maxn=1000000;
	
	for(int i=1;i<=maxn;i++)
	is_prime[i]=1;
	
	is_prime[0]=is_prime[1]=0;
	
	for(int i=2;i*i<=maxn;i++)
	{
		if(is_prime[i])
		{
			for(int j=i*i;j<=maxn;j+=i)
			is_prime[j]=0;
		}
	}
}

int main()
{
	sieve();
	
	cout<<is_prime[17];
	cout<<endl;
	cout<<is_prime[2000];
	
}
