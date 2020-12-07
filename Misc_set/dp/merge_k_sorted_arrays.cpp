// merge k sorted arrays classic divide and  conqueror

#include<bits/stdc++.h> 
using namespace std; 

#define N 4

void merge(int a1[],int a2[],int n1,int n2,int a3[])
{
	int i=0,j=0,k=0;
	
	while(i<n1&&j<n2)
	{
		if(a1[i]<a2[j])
		{
			a3[k]=a1[i];
			k++;
			i++;
		}
		else
		{
			a3[k]=a2[j];
			k++;
			j++;
		}
	}
	
	while(i<n1)
	{
		a3[k]=a1[i];
		k++;
		i++;
		
	}
	while(j<n2)
	{
		a3[k]=a2[j];
		k++;
		j++;
	}
}

void printarry(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}


void mergekarrays(int a[][N],int i,int j,int output[])
{
	
	if(i==j)
	{
		for(int k=0;k<N;k++)
		output[k]=a[i][k];
	}
	
	if(j-i==1)
	{
		
		merge(a[i],a[j],N,N,output);
	}
	
	int out1[N*(((i+j)/2)-i+1)],out2[N*(j-((i+j)/2))];
	
	mergekarrays(a,i,(i+j)/2,out1);
	mergekarrays(a,(i+j)/2+1,j,out2);
}


int main()
{
	
	 int arr[][N] =  {{2, 6, 12, 34}, 
                     {1, 9, 20, 1000}, 
                     {23, 34, 90, 2000}}; 
                     
     int k=sizeof(arr)/sizeof(arr[0]);
	 
	 int out[N*k];
	 
	 mergekarrays(arr,0,2,out);
	 
	 printarry(out,N*k);                
}
