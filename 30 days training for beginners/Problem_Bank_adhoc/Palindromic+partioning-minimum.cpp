// palindromic partioning
#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s,int i,int k)
{
	 while(i<=k)
	 {
	 	if(s[i]!=s[k])
	 	return false;
	 	else
	 	{
	 		i++;
	 		k--;
		 }
		 return true;
	 }
}

int palindromic_partiton(string s,int i,int j)
{
	if(i>=j)
	return 0;
	
	if(ispalindrome(s,i,j))
	return 0;
	
	int min=INT_MAX;
	int temp;
	
	for(int k=i;k<=j-1;k++)
	{
		temp=palindromic_partiton(s,i,k)+palindromic_partiton(s,k+1,j)+1;
		if(temp<min)
		min=temp;
	}
	return min;
}

int main()
{
	
string s="nitik";



int n=s.length();
cout<<palindromic_partiton(s,0,n-1);	
}
