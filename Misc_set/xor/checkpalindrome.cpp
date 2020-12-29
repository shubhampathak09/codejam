// palindrome partitoning

#include<bits/stdc++.h>
using namespace std;

int checkpalindrome(string s,int i,int j)  // racecar i=0,j=6  caac
{
	
int m=(i+j)/2 -1;	// to get mid -1 fot correct palinfrome match

for(int i=0;i<=m;i++)
{
	if(s[i]!=s[j-i])
	return false;
}
return true;	
}

int main()
{
	int t;
	
    cin>>t;	
	while(t--)
	{
	
	string s;
	
	cin>>s;
	
	int n=s.length();
	
	cout<<checkpalindrome(s,0,n-1);
}
}
