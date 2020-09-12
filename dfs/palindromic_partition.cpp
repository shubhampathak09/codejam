
#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(string s,int i,int j)
{
	
	while(i<=j)
	{
		if(s[i++]!=s[j--])
		return false;
	}
	return true;
}

int min_cutsreq(string s,int i,int j)
{
	if(i>=j||ispalindrome(s,i,j))
	return 0;
	
	int min_cut=INT_MAX;
	int cuts;
	for(int k=i;k<j;k++)
	{
		cuts=min_cutsreq(s,i,k)+min_cutsreq(s,k+1,j)+1;
		if(cuts<min_cut)
		min_cut=cuts;
	}
	return min_cut;
}

int main()
{

cout<<min_cutsreq("geek",0,3);

}
