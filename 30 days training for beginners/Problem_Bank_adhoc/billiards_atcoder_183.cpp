// atcoder_183 billiards
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	cout<<setprecision(9);
	cout<<fixed;
	int sx,sy,gx,gy;
	

	
	cin>>sx>>sy>>gx>>gy;
     
	if(sx==sy)
	{
		cout<<sx<<endl;
		return;
	 } 
	 	
	sy=-sy;
	
	double m=1.0*(gy-sy)/(gx-sx);
	
	//y-sy=m(x-sx)
	
//	int y=m*x+sy-m*sx;
//x=>	sy=msx-mx=> (sy-msx)/m;
//	y=sy-m*sx
double x=(m*sx-sy)/m;
cout<<x<<endl;
}
int main()
{
	solve();
	
}
