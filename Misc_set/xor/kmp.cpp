//  01234
//aba#deabacfhvabaabaertaba
//012345678
//001000123
// k-len(p)+1


#include<bits/stdc++.h>
using namespace std;

int loc_kmp(string text,string pattern)
{
	
	string temp=pattern+"$"+text;
	
	int n=temp.length();
	
	int prefix[n];
	
	prefix[0]=0;
	
	for(int i=1;i<n;i++)
	{
		
		int l=prefix[i-1];
		while(l>0&&temp[i]!=temp[l])
		{
			l=prefix[l-1];
		}
		if(temp[i]==temp[l])
		{
			l++;
		}
		prefix[i]=l;
	}
	
	for(int i=0;i<n;i++)
	{
	//	cout<<i<<" "<<prefix[i]<<" ";
	//	cout<<endl;
		if(prefix[i]==pattern.length())
		{
		 cout<<"Pattern found at index or indexex:..
		 "<<(i-pattern.length())-pattern.length(); 	
		}
	}
	return 0;
}


int main()
{
	string text="ABABDABACDABABCABAB";// n=19
	
	string pattern="ABABCABAB";        //m=9
	
	
	int m=text.length();
	
	int n=pattern.length();
	
	
//	cout<<m<<" "<<n;
	
//	cout<<endl;
	
	loc_kmp(text,pattern);
	
}
