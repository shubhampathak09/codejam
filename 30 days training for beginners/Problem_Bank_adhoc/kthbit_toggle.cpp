#include<bits/stdc++.h>
using namespace std;


int turn_on_kthbit(int n,int k)
{
	int x=(1<<k-1);
	return x|n;
}

int turn_off_kthbit(int n,int k)
{
	int x=~(1<<k-1);
	return n&x;
}

int main()
{
	
	int n=20;
	
	cout<<"After turning off the bit the result is.."<<turn_off_kthbit(n,3);
	
	cout<<endl;
	
	cout<<"After turning on the bit the result is.."<<turn_on_kthbit(n,4);
	
	
}
