// generate all possible sets

#include<bits/stdc++.h>
using namespace std;

void generate_subsets(char set[],int n,int k,string prefix)
{
	
	if(k==0)
	{
		cout<<prefix<<endl;
		return;
	}
	
	for(int i=0;i<n;i++)
	{
		string newprefix;
		newprefix=prefix+set[i];
		generate_subsets(set,n,k-1,newprefix);
	}
}

int main()
{
	
	char set[]={'a','b','c'};
	
	int n=sizeof(set)/sizeof(set[0]);
	
//	for(int k=1;k<=n;k++)
//	{
//		generate_subsets(set,n,k,"");
//		cout<<endl;
//	}
 	
 
generate_subsets(set,n,2,"");

}
