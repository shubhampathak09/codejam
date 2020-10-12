
// remove duplicates without sets
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="geeksforgeeks";
	
	string str="";
	int n=s.length();
	
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			break;
		}
		
		if(j==n)
		str+=s[i];
	}
	
	cout<<str;
}
