// utility function to return integer value of given string

#include<bits/stdc++.h>
using namespace std;


int toint(string x)
{
	int num=0;
	
	if(x[0]!='-')
	{
		for(int i=0;i<x.length();i++)
		{
			num=num*10+x[i]-'0';
		}
		return num;
	}
	else
	{
		for(int i=1;i<x.length();i++)
		{
			num=num*10+x[i]-'0';
		}
		return -1 *num;
	}
	
}


int main()
{
	
//	string s="483";
//	
//	int num=0;               // 0 has ascci value of 48
//	                         // char 1 has ascii value of 49
//	cout<<int(s[0])<<endl;   // char 4 has ascii value 52
//	
//	for(int i=0;i<s.length();i++)
//	{
//		int c=(int(s[i])-48);
//		num=num*10+c;
//	   // cout<<num<<"\t";	
//	}
//	
//	cout<<num<<endl;
//	
//	// m-2
//	int num1=0;
//	for(int i=0;i<s.length();i++)
//	{
//		
//		num1=num1*10 + s[i]-'0';
//	}
//	cout<<num1;


cout<<toint("-53")<<"\t";
cout<<toint("123")<<"\t";
cout<<toint("0");


}
