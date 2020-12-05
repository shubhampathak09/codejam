#include<bits/stdc++.h>
using namespace std;

struct node
{
	int id;
	int w;
	node(int id)
	{
		this->id=id;
	}
};



int main()
{
	
	vector<node>white,black;
	
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int color;
		cin>>color;
		int we;
		cin>>we;
		node n=node(i);
		n.w=we;
		
		if(color==0)
		{
			white.push_back(n);
		}
		else
		{
			black.push_back(n);
		}
	}
	
	int whitep=0;
	int blackp=0;
	
	while(whitep<white.size()&&blackp<black.size())
	{
		
		 node x=white[whitep], y=black[blackp];
		 
		if(y.w<x.w)
		{
			int wv=min(x.w,y.w);
			x.w=x.w-wv;
			y.w=y.w-wv;
			cout<<y.id+1<<" "<<x.id+1<<" "<<wv<<endl;;
		    blackp++;	
		 }
		else if(x.w<y.w)
		{
			int wv=min(x.w,y.w);
			x.w=x.w-wv;
			y.w=y.w-wv;
			cout<<x.id+1<<" "<<y.id+1<<" "<<wv<<endl;
			whitep++;
		  }
		  else  //x.w=y.w
		  {
		  	cout<<x.id+1<<" "<<y.id+1<<" "<<x.w<<endl;
		  	blackp++;
		  	whitep++;
			}  
	}
	
	
}
