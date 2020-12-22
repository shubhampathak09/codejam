/*
Input  : expr = “1+2*3+4*5” 
Output : Minimum Value = 27, Maximum Value = 105 
Explanation:
Minimum evaluated value = 1 + (2*3) + (4*5) = 27
Maximum evaluated value = (1 + 2)*(3 + 4)*5 = 105
*/




#include<bits/stdc++.h>
using namespace std;



int min_solve(string s,int i,int j)
{
	
	
	if(i>j)
	return 0;
	
	if(i==j)
	{
		return s[i]-'0';
	}
	
	
	int ans=INT_MAX;
	
	for(int k=i+1;k<=j-1;k+=2)
	{
		int left=min_solve(s,i,k-1);
		int right=min_solve(s,k+1,j);
		
		if(s[k]=='+')
		{
			int tempans=left+right;
			if(tempans<ans)
			ans=tempans;
		}
		else
		{
			int tempans=left*right;
			if(tempans<ans)
			ans=tempans;
		}
	}
	return ans;
}

int max_solve(string s,int i,int j)
{
	if(i>j)
	return 0;
	
	if(i==j)
	{
		return s[i]-'0';
	}
    
	int ans=INT_MIN;
	
	for(int k=i+1;k<=j-1;k+=2)
	{
		
		int left=max_solve(s,i,k-1);
		int right=max_solve(s,k+1,j);
		if(s[k]=='+')
		{
			int tempans=left+right;
		    if(tempans>ans)
			ans=tempans;	
		}
		else //(s[k]=='*')
		{
			int tempans=left*right;
			if(tempans>ans)
			ans=tempans;
		}
		
		
		}
		
		return ans;	
}


int main()
{
	
string s="1+2*3+4*5";
	
	
int i=0;

int j=s.length()-1;


cout<<"Maximum value of expression possible:";
cout<<max_solve(s,i,j);

cout<<endl;

cout<<"Minimum value of expression is:";
cout<<min_solve(s,i,j);

	
}
