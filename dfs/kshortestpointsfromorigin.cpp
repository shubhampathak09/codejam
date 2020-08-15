#include<bits/stdc++.h>
using namespace std;


struct point
{
	int x;
	int y;
};


bool compare(point p1,point p2)
{
	
	return p1.x*p1.x+p1.y+p1.y<p2.x*p2.x+p2.y+p2.y;
	
}

int main()
{
	
	point points[]={{1,1},{2,2},{4,4},{5,5},{1,0}};
	
//	cout<<points[0].x<<points[0].y;
	
// 	int s=points.size();  incorrect points not an array to use size function rather use generic

int s=sizeof(points)/sizeof(points[0]);
  	
	sort(points,points+s,compare);

//cout<<endl;

int k=3;
//pair<int,int>p;
if(k<s)
for(int i=0;i<k;i++)
{
	
	cout<<points[i].x<<points[i].y;
	cout<<endl;
}

	
}
