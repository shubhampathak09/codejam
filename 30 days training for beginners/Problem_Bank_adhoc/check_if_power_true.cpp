// program to find if number is power of 2


#include<bits/stdc++.h>
using namespace std;

// 2 10
// 4 100
// 8 1000

int countsetbits(int n)
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

bool check(int n)
{
	if(countsetbits(n)==1||n==0)
	return true;
	else
	return false;
}
int main()
{
	
	// check if power of 2
	
	cout<<check(5)<<" ";
	
	cout<<check(8)<<" ";
	
	cout<<check(7);
	
	
	
}
