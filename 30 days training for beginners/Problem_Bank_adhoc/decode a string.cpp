// decode a message

#include<bits/stdc++.h>
using namespace std;


int decode(string message,int n)
{
	if(n==0||n==1)
	return 1;
	
	if(message[0]=='0')
	return 0;
	
	int count=0;
	
	if(message[n-1]>'0')
	count=decode(message,n-1);
	
	if(message[n-2]=='1'||(message[n-2]=='2'&& message[n-1]<'7'))
	count+=decode(message,n-2);
	
	return count;
}

int main()
{
	
	string s="121344";
	
	// decode this string find number of ways;
	
	int n=s.length();
    	
	int number_ways=decode(s,n);
	
	cout<<number_ways;
}
