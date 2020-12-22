
#include<bits/stdc++.h>
using namespace std;


int solve(string s,int i,int j,bool istrue)
{
	
	if(i>j)
	return 0;
	
	if(i==j)
	{
		if(istrue==true)
		{
			 
			return s[i]=='T';
		}
		else
		{
			 
			return s[i]=='F';
		}
	}
	
	
	int ans=0;
	
	for(int k=i+1;k<=j-1;k+=2)
	{   
	   // cout<<s[k]<<' ';
		int lt=solve(s,i,k-1,true);
		int rt=solve(s,k+1,j,true);
		int lf=solve(s,i,k-1,false);
		int rf=solve(s,k+1,j,false);
		
		
		if(s[k]=='|')
		{
			
			if(istrue==true)
			{
				ans+=ans+lt*rt+lt*rf+lf*rt;
			}
			else
			{
				ans+=ans+lf*rf;
			}
		}
		else if(s[k]=='&')
		{
			if(istrue==true)
			{
				ans+=ans+lt*rt;
			}
			else
			{
				ans+=ans+lt*rf+lf*rt+lf*rf;
			}
		}
		else if(s[k]=='^')
		{
			if(istrue==true)
			{
				ans+=ans+lf*rt+lt*rf;
			}
			else
			{
				ans+=ans+lt*rt+lf*rf;
			}
		}
	}
	
	return ans;
}

int main()
{
	
	string s="T^F&T";
                	
	int i=0;
	
	int j=s.length()-1;
	
	cout<<solve(s,i,j,true);
}
