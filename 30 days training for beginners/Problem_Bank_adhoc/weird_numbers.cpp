#include<bits/stdc++.h>
using namespace std;

// solution to weird numbers

void printpattern(int long long n)
{
	if(n==1)
	{
		cout<<1<<" ";
		return;
	}
	
	cout<<n<<" ";
	
	if(n%2==0)
	{
		n=n/2;
	}
	else
	{
		n=3*n+1;
	}
	printpattern(n);
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	// scanf("%d %d",&a,&b);
	//printf("%d %d\n",a,b);
	printpattern(138367);
}



/*
while(true)
{
	if(n==1)
	{
		cout<<1;
		break;
	}
	cout<<n;
	if(n&2==0)
	{
		n=n/2;
	}
	else
	n=3*n+1;
}*/


//int 32 bit tyep-> 2^-31,2^31-1->-2*10^9->2*10^9-1

