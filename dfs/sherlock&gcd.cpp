
#include<bits/stdc++.h>
using namespace std;

int getgcd(int a,int b)
{
	if(a==0)
	return a;
	else if(b==0)
	return a;
	else if(a%b==0)
	return b;
	else
	return getgcd(b,a%b);
}

int main()
{
	
	int a[]={8,4,2};
	int n=sizeof(a)/sizeof(a[0]);
	
	int gcd=0;
	for(auto x:a)
	{
		
		gcd=getgcd(gcd,x);
		
		}
		if(gcd==1)
		cout<<"Yes";
		else
		cout<<"No";
}
