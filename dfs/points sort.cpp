// custom sort funtion for points
#include<bits/stdc++.h>
using namespace std;


struct point{
	int x;
	int y;
};


bool compare(point p1,point p2)
{
	return p1.x<p2.x;
}

int main(){
	
	
	point points[]={{2,3},{6,8},{4,4},{-2,9},{5,6},{7,0}};
	
	int n=sizeof(points)/sizeof(points[0]);
	sort(points,points+n,compare);
	
	for(int i=0;i<n;i++)
	{
		cout<<points[i].x<<" "<<points[i].y<<"\t";
	}
}
