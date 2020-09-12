// Palindromic partitoning bottom-up

#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];

bool ispalindrome(string s,int i,int j)
{
	
	while(i<=j)
	{
		if(s[i++]!=s[j--])
		return false;
	}
	return true;
}

int palindromic_partiton(string s,int i,int j)
{
	if(i>=j||ispalindrome(s,i,j))
	return 0;
	
	if(t[i][j]!=-1)
	return t[i][j];
	
	int min_cuts=INT_MAX;
	
	for(int k=i;k<j;k++)
	{
		int cuts=palindromic_partiton(s,i,k)+palindromic_partiton(s,k+1,j)+1;
		if(cuts<min_cuts)
		min_cuts=cuts;
	}
	return t[i][j]=min_cuts;
}

int main()
{
	
	memset(t,-1,sizeof(t));
	string s="BABABCBADCD";
	
	int n=s.length();
	cout<<palindromic_partiton(s,0,n-1);
}
