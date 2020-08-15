#include<bits/stdc++.h>
using namespace std;

// brtual appraoch

int main()
{
	
// sort 0s ,1s and 2s without using extra space


// indexzero1

// 2 0 2 0 1 1

int a[]={2,0,2,0,1,1,0,0,1,1,2,0,1,2,2,0,0,2};

int countzero=0,countone=0,counttwo=0;
int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++)
{
	if(a[i]==0)
	countzero++;
	else if(a[i]==1)
	countone++;
		else
		counttwo++;
}

//cout<<countzero<<countone<<counttwo;

int i=0;
while(countzero||countone||counttwo)
{
	if(countzero!=0)
	{
		a[i]=0;
		i++;
		countzero--;
	}
	else if(countzero==0&&countone!=0)
	{
		a[i]=1;
		i++;
		countone--;
	}
	else
	{
		a[i]=2;
		i++;
		counttwo--;
	}
	

}

	for(int i=0;i<n;i++)
	cout<<a[i];

}
 
