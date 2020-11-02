// koko eating bananas
#include<bits/stdc++.h>
using namespace std;

// test case
/*
Example 1:

Input: piles = [3,6,7,11], H = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], H = 5
Output: 30
Example 3:

Input: piles = [30,11,23,4,20], H = 6
Output: 23
*/

long ciel_cal(long x,long k)
{
	if(x%k==0)
	return x/k;
	else
	return 1+x/k;
}

 
 int minEatingSpeed(vector<long>& piles, long H) {
       
       // find k=?
       long low=1,high=INT_MAX;
       long answer=-1;
       while(low<=high)  // doing low<high result in +-1 difference of answer???
       {
       	
       	long k=(low)+(high-low)/2;
       	long st=0;
       	for(long i:piles)
       	{
       		st+=ciel_cal(i,k);
       		
		   }
		   
		   if(st<=H)
		   {
		   	answer=k;
		   	high=k-1;
		   }
		   else
		   {
		   	low=k+1;
		   }
	   }
       return answer; 
    }

int main()
{
	
	// test case 1
	vector<long>a={3,6,7,11};
	long H=8;
	
	cout<<minEatingSpeed(a,H);
	
	cout<<endl;
	// test case 2:
	long H1=6;
	vector<long>a1={30,11,23,4,20};
	cout<<minEatingSpeed(a1,H1);	
}
