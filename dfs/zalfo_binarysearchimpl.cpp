// longest prefix that is a suffix

// gettting an outptu of "a "    instead of "a"  why???????????????????????????????????????????????
// mother wiese correc5tr\


#include<bits/stdc++.h>
using namespace std;

vector<int>z(1001);


void zalgo()
{
	int maxi=0, max_len=0;
	
	string s;
	cin>>s;
	
	int n=s.length();
	
     
	for(int i=1;i<n;i++)
	{
		while(i+z[i]<n&&s[z[i]]==s[z[i]+i])
		++z[i];
	}
	
		for(int i=0;i<n;i++)
     	cout<<z[i]<<" ";
     	
     	for(int i=0;i<n;i++)
     	{
     	  if(z[i]>maxi)
     	  {
     	  	maxi=i;
     	  	max_len=z[i];
		   }
		   
		 }
		 
		 cout<<endl;
		 
		 cout<<maxi<<" "<<max_len;
	   
         cout<<endl;
         
		 	   
	     cout<<s.substr(maxi,maxi+max_len);
	     
}

int main()
{
	
//	string s="abazfaba";
	zalgo();
	

	
}
