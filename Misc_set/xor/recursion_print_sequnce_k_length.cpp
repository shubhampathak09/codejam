#include<bits/stdc++.h>

using namespace std;


void generate_prefix(char set[],int n,int k,string prefix)
{
	
	if(k==0)
	{
		cout<<prefix<<"\n";
		return;
	}
	
	for(int i=0;i<n;i++)
	{
		string newprefix;
		
		newprefix=prefix+set[i];
		
		generate_prefix(set,n,k-1,newprefix);
	}
	
}

void printsequence()
{
	
	char set[]={'a','b'};
	
	int n=sizeof(set)/sizeof(set[0]);
	
	int k=3;
	
	generate_prefix(set,n,k,"");
}

int main()
{
	
	printsequence();
	
}
