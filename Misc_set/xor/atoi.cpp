#include<bits/stdc++.h>
using namespace std;

// recursive impl

int my_atoi(char *str,int n)
{
//    123// 3 + 10*(2+10*1))=123	
	if(n==1)
	{
		return str[n-1]-'0';
//		return *str-'0';
	}
	
	return (10*my_atoi(str,n-1)+str[n-1]-'0');
}

int main()
{
	
//	string s="10";
  char s[10]="123";
 // string s1="4555"; 
  
  //strcpy(s1,)  	
  //cout<<atoi(s1);  // argument as char array
 	
// int val=atoi(s);	
//  cout<<val;
	
cout<<"Below my own impl"<<endl;

int n=strlen(s);

// what???????????size of does not work in case of integers?hmmmm....
//cout<<n;

cout<<my_atoi(s,n);	
	
}
