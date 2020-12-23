/*Check if a string is a scrambled form of another string
Last Updated: 02-12-2020
Given two strings S1 and S2 of equal length, the task is to determine if S2 is a scrambled form of S1.
Scrambled string: 
Given string str, we can represent it as a binary tree by partitioning it to two non-empty substrings recursively.
Note: Srambled string is not same as an Anagram
Below is one possible representation of str = “coder”:*/

#include<bits/stdc++.h>
using namespace std;


bool solve(string a,string b)
{
	
	if(a.compare(b)==0)
    return true;
	
	if(a.length()<=1)
	return false;
	
	
	int n=a.length();
	bool flag=false;
	for(int i=1;i<=n-1;i++)
	{
		if(((solve(a.substr(0,i),b.substr(n-i,i))==true)&&(solve(a.substr(i,n-i),b.substr(0,n-i))==true))||(solve(a.substr(0,i),b.substr(0,i))==true)&&(solve(a.substr(i,n-i),b.substr(i,n-i))==true))
	    {
	    	flag=true;
	    	break;
			}	
	}
	return flag;
}

int main()
{
	
	string a;
	string b;
	
	cin>>a>>b;
	
	if(a.length()!=b.length())
	{
		cout<<"Not scrambled";
		
		return 0;
	}
	
	
	if(a==""&&b=="")
	{
		cout<<"Scrambled";
		return 0;
	}
	
	cout<<solve(a,b);
	
}
//wew
