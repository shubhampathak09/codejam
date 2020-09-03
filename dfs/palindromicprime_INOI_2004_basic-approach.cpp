#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
	if(n==1)
	return false;
	
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

bool ispalindrome(int n)
{
	int sum=0;
	int num=n;
	while(n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	return num==sum;
}

int palindromicprime(int n)
{
	int x=n;
	bool flag=0;
	
	while(!flag)
	{
		x=x+1;
		if(isprime(x)&&ispalindrome(x))
		{
			flag=1;
		}
		
	}
	return x;
}

int main()
{
	
	//cout<<isprime(1);

//	cout<<ispalindrome(5);
//	cout<<ispalindrome(12);
//	cout<<endl;
//	cout<<ispalindrome(121);
   cout<<palindromicprime(7);
   cout<<endl;
   
   cout<<palindromicprime(31);
   
   cout<<endl;
   
   cout<<palindromicprime(112);

}
