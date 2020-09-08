// from run length encoding to string 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="";
	
	string input="w4a3d1e1x6y1w3";
	
	int l=input.length();
	
	for(int i=0;i<l;i+=2)
	{
	//	cout<<1;
		char c=input[i];
	//	cout<<c;
		
		int j= input[i+1]-'0';
	//	cout<<j;
		while(j--)
		{
			s+=c;
		}
	}
	
	cout<<s;
}
