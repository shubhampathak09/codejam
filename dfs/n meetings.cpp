// n meetings in room

#include<bits/stdc++.h>
using namespace std;

struct meeting
{
	int start;
	int end;
	int pos;
	
};

bool compare(meeting m1,meeting m2)
{
	return m1.end<m2.end;
}

int maxmeeting(int s[],int f[],int n)
{
	
	struct meeting meet[n];
	for(int i=0;i<n;i++)
	{
		meet[i].start=s[i];
		meet[i].end=f[i];
		meet[i].pos=i+1;
	}
	
	sort(meet,meet+n,compare);
//	
//	int k=sizeof(meet)/sizeof(meet[0]);
//	
//	for(int i=0;i<k;i++)
//	{
//		cout<<meet[i].start<<"\n";
//		cout<<meet[i].end<<"\n";
//	}
		
	vector<int>m;
	m.push_back(meet[0].pos);
	int time_limit=meet[0].end;
	
//	cout<<time_limit<<"\n";
//	cout<<meet[2].start<<endl;
	for(int i=1;i<n;i++)
	{
		if(meet[i].start>=time_limit)
		{ 
	//	    cout<<"here";
		//    cout<<time_limit<<endl;
			time_limit=meet[i].end;
			
			m.push_back(meet[i].pos);
		}
	}
	
	return m.size();
}

int main()
{
	
	int s[]= { 1, 3, 0, 5, 8, 5 };
    int f[] = { 2, 4, 6, 7, 9, 9 };
    
	int n=sizeof(s)/sizeof(s[0]);	
	
//	cout<<n;

   cout<<maxmeeting(s,f,n);	
	
}
