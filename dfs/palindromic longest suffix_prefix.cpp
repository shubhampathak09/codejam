 //Z-Algorithm trivial implementation
// easy peasy
#include<bits/stdc++.h>
using namespace std;

vector<int>z(1000,0);

void z_function(string s)
{
	
	int m=s.length();
//	cout<<m;
	for(int i=1;i<m;i++)
	{
		while(i+z[i]<m&&s[z[i]]==s[z[i]+i])
		++z[i];
	}
	
}

bool ispalindrome(string s)
{
	string temp=s;
	reverse(temp.begin(),temp.end());
	return s==temp;
}

int main()
{
	
	
	//string text="aabcdaabc";
      string text="bbbartbb";
   	
	z_function(text);
	
	for(int i=0;i<text.length();i++)
	cout<<z[i]<<" ";
    
    cout<<"\n";
    
     int m=0,index=0;
     
	for(int i=0;i<text.length();i++)
	{
		if(m<z[i])
		{
			m=z[i];
			index=i;
		}
	
	}
	
//	cout<<text.substr(index,index+m);
	
	// palindromic largest prefix=plaindromic largest suffix
	int greatest_so_far=0;
	string s="0";
	for(int i=0;i<text.length();i++)
	{
		if(z[i]==0||z[i]==1)
		continue;
		
		else
		{
			
			if(ispalindrome(text.substr(i,i+z[i]))&&z[i]>greatest_so_far)
			{       
			//cout<<"Ye";
			     	greatest_so_far=z[i];
					s=text.substr(i,i+z[i]);
				
			}
			
		}
		
	}
	if(s=="0")
	cout<<"no sol";
	else
	cout<<s;
}
