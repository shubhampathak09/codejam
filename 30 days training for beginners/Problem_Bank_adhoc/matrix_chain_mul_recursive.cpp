
#include<bits/stdc++.h>
using namespace std;

int matrix_mul(int a[],int i,int j)
{
	if(i>=j)
	return 0;
	
	int min=INT_MAX;
	int temp;
	
	for(int k=i;k<=j-1;k++)
	{
		temp=matrix_mul(a,i,k)+matrix_mul(a,k+1,j)+a[i-1]*a[k]*a[j];
		if(temp<min)
		min=temp;
	}
	return min;
}

int main()
{
	
	 int arr[] = { 1, 2, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<matrix_mul(arr,1,n-1);
    
}
