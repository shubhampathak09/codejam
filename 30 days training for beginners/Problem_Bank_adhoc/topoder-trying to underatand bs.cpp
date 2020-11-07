#include<bits/stdc++.h>
using namespace std;


int solve(int low,int high,int a[],int k)
{
	 int n=sizeof(a)/sizeof(a[0]);
	 
	 int sum=0;
	 
	 int count=0;
	 
	 for(int i=0;i<n;i++)
	 sum+=a[i];
	 // 450
	 while(low<high)
	 {
	 	
	 int mid=(low+high)/2;  //225
	   
	 
	 
	 if(mid>sum)
	 {
	 	high=mid-1;  //450
	    count++;
		 }
		 else if(mid<sum)
		 {
		 	low=mid+1;
		 	count++;
			 }
			 
			 if(count==k)
			 return mid;	
	 }
	 
	return -1;
}

int main()
{
	
 int a[]={10,20,30,40,50,60,70,80,90};
 
 int n=sizeof(a)/sizeof(a[0]);
 
 int high=450;
 
 int low=1;
 
 int k=3;

cout<<solve(low,high,a,k);
 	
}
	 
	

