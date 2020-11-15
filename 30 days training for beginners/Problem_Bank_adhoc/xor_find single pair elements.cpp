/*Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct.
 Find the other two numbers  (in ascending order). */
 
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	int a[]={1,1,2,2,3,4 };
	
	int result=0;
	
	for(auto x:a)
	result^=x;
	
	
	// find msb in result;
	
	int msb=result & ~(result-1);
	
	vector<int>set_bit,unset_bit;
	
	for(auto x: a)
	{
		if(x&msb)
		set_bit.push_back(x);
		else
		unset_bit.push_back(x);
	}
	
	int first_num=0,second_num=0;
	
	for(auto x:set_bit)
	{
		first_num=first_num^x;
	}
	for(auto x:unset_bit)
	{
		second_num=second_num^x;
	}
	
	cout<<first_num<<" "<<second_num;
	
}
