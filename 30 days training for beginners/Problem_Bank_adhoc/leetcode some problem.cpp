#include<bits/stdc++.h>
using namespace std;

int main()
{
//	 int count=1;
	string s="leetcooodeeee";
	
    int c=1,m=1,n=s.length();
    
    for(int i=1;i<=n;i++)
    {
    	if(s[i]==s[i-1])
    	{
    		c++;
    		m=max(m,c);
		}
		else
		c=1;
	}
 
   cout<<m;
}
