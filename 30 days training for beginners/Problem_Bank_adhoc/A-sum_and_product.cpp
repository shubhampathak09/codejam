//x+y=s
//x*y=p
//
////x>y
//
//y>x
//xy>xx
//xx<xy<p
//x<sqp
//y=1

// N+M=S
//N*M=p

//
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n=1000050;
//	cout<<n;

     int s,p;
     cin>>s>>p;
     
     
    int flag=0;
    for(int i=1;i<=n;i++)
	{
		if(i*(s-i)==p)
		{
			cout<<"Yes";
			flag=1;
			break;
		}
		}	
	if(flag==0)
	{
		cout<<"No";
	}
	
}
