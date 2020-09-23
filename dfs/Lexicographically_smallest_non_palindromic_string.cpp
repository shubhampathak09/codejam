// replace a single charatcer and make it lexicographically smallest palindrome
#include<bits/stdc++.h>
using namespace std;


string lexsmall(string s)
{
	int n=s.length();
	
	int mid=n/2;
	
	for(int i=0;i<mid;i++)
	{
		if(s[i]!='a')
		{
			s[i]='a';
			return s;
		}
	}
	
	s[n-1]='b';
	
	if(n<2)
	return "-1";
	else
	return s;
	
}

int main()
{
	
	cout<<lexsmall("ababa");
	
	cout<<endl;
	
	cout<<lexsmall("dbfafbd")<<endl;
	
	cout<<lexsmall("a")<<endl;
	
	cout<<lexsmall("aaaaaaaa");
	
}
