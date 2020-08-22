// minimum chahracters to replace to change into palindrome

// geeks
// ab
// 2

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string s1="geeks";
	
	int n=s1.length();
    
	int count=0;
		
	int mid=n/2;
		
	for(int i=0;i<mid;i++)
	{
	
	if(s1[i]!=s1[n-i-1])
	count++;
}
//return count;

  cout<<count;

}
