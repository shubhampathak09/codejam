// to do
//select a pivot
// fix i at pivot j to end of lost->high
//find an element greater than pivot i corresponds to it
// find an elemtn smaller than low, j will point swAP i AND j

#include<bits/stdc++.h>
using namespace std;


void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
	
	int p=partition(a,low,high);
	quicksort(a,low,p-1);
	quicksort(a,p+1,high);
//}

}
 
 

int main()
{
	
	
}
