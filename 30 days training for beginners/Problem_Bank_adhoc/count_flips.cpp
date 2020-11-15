#include<bits/stdc++.h>
using namespace std;
// count number of bits two be flipped to convert A into B

int count_flips(int a,int b)
{
	
	int xor_result=a^b;
	
	int count=0;
	
	while(xor_result!=0)  
	{
		if(xor_result&1)
		count++;
		xor_result=xor_result>>1;
	}
	
	return count;
}

int main()
{
	                               // 10001
	                               // 10100
int a=5; // 0101

int b=9; // 1001
	     //  1 1 0 0 0
		 
cout<<count_flips(17,20);		  
}
