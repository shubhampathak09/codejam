 #include<bits/stdc++.h>
 
 using namespace std;
 
 // some property can come
 // can be used to find an element
 // find it for first and last occurence two binary searches
 // rortated array ??? Have to revisti this once
 // leetcode prac problems
 // topcoder problems
 // and so on.....
 
 
 
 int bs(int a[])
 {
 	int low=0;
 	int high=n-1;
 	
 	if(low<high)
 	{
 		int mid=(low+high)/2;
 		
 		if(a[mid]<=someproperty)  // ??? core of binary mid
 		{
 			ans=mid;  //sorted if some property is true for mid then we can definitly says its true for elements>mid
 			high=mid=1;  // 
		 }
		 else
		 {
		 	low=mid+1;
		 }
	 }
	 return ans;  ///genewral format binary search
 }
 
