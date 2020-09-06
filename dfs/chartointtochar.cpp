#include<bits/stdc++.h>
using namespace std;



int main()
{
//	char a[]={A}
//	char x='A';
//	cout<<char(x+1);
//	cout<<'z'-'a';
//	cout<<endl;
//	cout<<'Z' -'A';
//	char x;
//	x+n>z;
//	(x+n-z)%z;

 
//cout<<((('V'+13) -'Z')%('Z'-'A')));


map<char,int>alphabet;

for(int i=0;i<26;i++)
alphabet['A'+i]=i+1;

for(int i=0;i<26;i++)
cout<<alphabet['A'+i]<<" ";


	
}
