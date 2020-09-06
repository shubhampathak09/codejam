// Happy Prefix


// need to print the longest prefix that is ewual to proper longer suffix
#include<bits/stdc++.h>
using namespace std;

vector<int>z(1000);


void z_function(string s)
{
	
	int n=s.length();
	
	for(int i=1;i<n;i++)
	{
		while(i+z[i]<n&&s[z[i]]==s[z[i]+i])
		++z[i];
	}
for(int i=0;i<n;i++)
{
	cout<<z[i]<<" ";
	
}
cout<<endl;

int m=z[0];
int k=0;
for(int i=1;i<n;i++)
{
 if(m<z[i])
 {
 	m=z[i];
 	k=i;
 }
}
cout<<m<<endl;  // 1
cout<<k<<endl;  //2
//cout<<s.substr(k,k+m);	

for(int i=k;i<k+m;i++)
cout<<s[i]<<endl;
//cout<<s.substr(k+1,k+m-1);
	
}// happy prefix

int main()
{
	
//	z_function("level");
//	cout<<endl;
	
	z_function("babbb");
}
