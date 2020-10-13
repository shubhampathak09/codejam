/*bool isprime(int n)
{
	if(n==1||n==0)
	return false;
	
	if(n==2)
	return true;
	
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
*/

// a better solution based on fact that one of divisiors lie below sqrt(n) while other lies above sqrt(n)


#include<bits/stdc++.h>
using namespace std;


bool isprime(int n)
{
	if(n==1)
	return false;
	
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main()
{
	int a[]={2,4,1,5,7,8,11,10,87,90,11,23,13,};
	
	for(auto x:a)
	{
		if(isprime(x))
		cout<<x<<" Prime number"<<endl;
		else
		cout<<x<<" Not prime"<<endl;
	}
	
	
	
	
	
}
