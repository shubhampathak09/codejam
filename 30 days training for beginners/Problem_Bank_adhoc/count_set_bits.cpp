#include<bits/stdc++.h>
using namespace std;
// count set bits in integer


int countsetbits(int n)
{
	int count =0;
	// 6 101 >
	while(n!=0)
	{
		if(n&1)
		{
		
		count++;
	//	cout<<count;
	}
	    //cout<<n;
		n=n>>1;
	}
	return count;
}

int main()
{
	
	cout<<countsetbits(6);
	
}
