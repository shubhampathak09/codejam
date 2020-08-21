//4 R 3 G
//R +g
//p(1)=r/r+g
//p(2)=g/r+g +g-1/r+g-1 +r/r+g-2
//p(3)=g/r+g +g-1/r+g-1 +g-2/r+g-2 + r/r+g-3
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int r,g;
	cin>>r>>g;
	int t=R+G;
	
	if(r==0)
	cout<<setprecision(6)<<1.000000;
	double ans=0;
	else
	{
		double k=1.0;
		if(r>0&&g>=0&&t>0)
		{
			
			ans+=k*(r/t);
			k*=(g/t)*(g-1)/(t-1);
			g-=2
			t-=2;
		}
	}
	
}
