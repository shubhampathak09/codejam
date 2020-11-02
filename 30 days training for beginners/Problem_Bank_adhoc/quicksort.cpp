// to do
//select a pivot
// fix i at pivot j to end of lost->high
//find an element greater than pivot i corresponds to it
// find an elemtn smaller than low, j will point swAP i AND j

#include<bits/stdc++.h>
using namespace std;


#define inf 1e7
//int a[n+1];



int partition(int l,int h,int a[]) 
{
	int pivot=a[l];
	int i=l,j=h;
	
	while(i<j)
	{
		
		do{
			i++;
		}while(a[i]<=pivot);
		
		do
		{
			j--;
		}while(a[j]>pivot);
		
		swap(a[i],a[j]);
	}
	
	swap(a[l],a[j]);
	return j;
}



void quicksort(int low,int high,int a[])
{
	if(low<high)
	{
	
	int p=partition(low,high,a);
	quicksort(low,p-1,a);
	quicksort(p+1,high,a);
//}

}
}



int main()
{

int a[]={4,1,2,3,4,5,1,7,inf};	

int n=sizeof(a)/sizeof(a[0]);

int low=0;
int high=n-1;

quicksort(low,high,a);

for(int i=1;i<n-1;i++)
cout<<a[i]<<" ";

	
}
