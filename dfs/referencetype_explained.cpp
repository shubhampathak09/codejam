#include<bits/stdc++.h>
using namespace std;

bool upmax(int a,int b)
{
	if(a<b)
	{
		a=b;
		return true;
	}
	return false;
}

bool upmax1(int &a,int b)
{
	if(a<b)
	{
		a=b;
		return false;
	}
	return true;
}

int main()
{
	int a=5;
	int b=7;
	
	upmax(a,b);
	cout<<a;
	// we havent passed a as ref varaible as result the value modified of a withing finction scope
	cout<<endl;
	
	  // [assed as refe
	  
	upmax1(a,b);
	cout<<a;
	
}
