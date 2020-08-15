#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int sum=0;

int getcolnumber(string s)
{
	
	int n=s.length();
	map<char,int>m;
	
	for(int i=0;i<=25;i++)
	{
		
		m['A'+i]=i+1;
	}
     	  //AA  zy
	 for(int i=0;i<=n-1;i++)
	 {
	   // int a=pow(26,n-i-1);
		//cout<<a;
		//cout<<m[s[i]]
			
	 	sum+=pow(26,n-i-1)*m[s[i]];
	 }
	 
	 return sum;
}


int main()
{
	
	//char x='A';
	//char y=x+25;
	//cout<<y;
	
	string s="ZY";
	
	cout<<getcolnumber("FXSHRXW");
	cout<<endl;
//	cout<<getcolnumber(s);
	
}
