// understandiong working of kmp fromscratch
#include<bits/stdc++.h>
using namespace std;





int main()
{
	
string s="bababacbba";

int n=s.length();

int count=1;

int prefix[n];
prefix[0]=0;
//generating all 10 string whose prefix and suffix need generated
for(int i=1;i<n;i++)
{
	string sub=s.substr(0,i+1);
	cout<<count++<<"-"<<sub<<endl;
	
	
	
	}	
	
}
