# -*- coding: utf-8 -*-
"""
Created on Sun Nov 22 19:22:54 2020

@author: bnpat
"""


# declare an array of size 10000

prime=[1 for i in range(10001)];

def check_prime():
    

 prime[0]=0;
 prime[1]=0;
 for i in range(2,10001):
   if(prime[i]==1):
       for x in range(i*i,10001,i):
          prime[x]=0;
           
check_prime();          
# test case prime[1001] ->0
#test case prime[101]->1            
    
