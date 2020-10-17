// check if kth bit is set or not
#include<bits/stdc++.h>
#include<bitset>
using namespace std;



// to convert a number to binary use bit set


bool check(int n,int k)
{
	
	int x=1<<k-1;
	
	if(n&x)
	return true;
	else
	return false;
	
}

int main()
{
	
	cout<<check(0,1);
	cout<<check(1,1);
	
	cout<<check(5,3);
	cout<<check(5,2);
	
	
	cout<<endl;
	
	cout<<bitset<8>(5);
	cout<<bitset<8>(11);
	cout<<endl;
	bitset<8>n=bitset<8>(20);
	
	cout<<n;
}
