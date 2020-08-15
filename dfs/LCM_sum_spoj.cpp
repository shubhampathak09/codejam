// LCM spoj
// Knaive approach

// bruteforce

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	
	if(a%b==0)
	return b;
	
	return gcd(b,a%b);
	
}


int lcm(int a,int b)
{
	int _gcd=gcd(a,b);
	int _lcm=(a*b)/_gcd;
	return _lcm;
	
}

int main()
{
	
	//cout<<gcd(16,12);
	//cout<<gcd(24,12);
	//cout<<gcd(24,9);
	
	// calculate lcm(1,n+ +lcm(2,n),...
	int t;
	cin>>t;
	while(t--)
	{
	
	int sum=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=lcm(i,n);
	}
	
	cout<<sum;
	
}
}
