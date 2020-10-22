//
//// min jumps req to reach end
//#include<bits/stdc++.h>
//using namespace std;
// 
//int main()
//{
//
//int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
//
//int n=sizeof(arr)/sizeof(arr[0]);
//int minsteps[n];
//
//
//minsteps[0]=0;
//for(int i=1;i<=n-1;i++)
//{
//	
//	for(int k=0;k<=i;k++)
//	{
//		if(i<=k+arr[k])
//		minsteps[i]=min(minsteps[i],minsteps[k]+1);
//	}
//	
//}
//cout<<minsteps[n-1];	
//}
