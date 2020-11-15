// count total set bits in 1 to n

#include<bits/stdc++.h>
using namespace std;


int count_setbits(int n)
{
	int count=0;
	while(n!=0)
	{
		if(n&1)
		count++;
		n=n>>1;
	}
	return count;
}

int count_bits_1_n(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=count_setbits(i);
	}
	return sum;
}

int main()
{
	
	
	cout<<count_bits_1_n(7)<<endl;
	
	cout<<count_bits_1_n(8);
	
}
