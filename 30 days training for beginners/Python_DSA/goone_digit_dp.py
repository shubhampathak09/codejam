# -*- coding: utf-8 -*-
"""
Created on Sun Nov 22 20:20:40 2020

@author: bnpat
"""


#gone numbers

#declaration
a=[[[-1 for x in range(10)] for x in range(90)] for x in range(2)]

prime=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71]


def check_prime(i):
    for x in a:
        if x==i:
            return 1
        else:
            return 0


def g(s1,pos=0,sum=0,tight=1):
    if(pos==len(s1)):
        if(check_prime(sum)):
            return 1;
        else:
            return 0;
    elif tight==1:
        res=0;
        for i in range(0,s1[pos]-'0'+1):
            if(i==s1[pos]-'0'):
                res+=g(s1,pos+1,sum+i,1)
            else:
                res+=g(s1,pos+1,sum+i,0)
        return res;        
    else:
        res=0;
        for i in range(0,10):
            res+=g(s1,pos+1,sum+i,0)
        return res;
    
    
    # input
    l=5
    r=19
    l=l-1
    a=str(l);
    b=str(r);
    
    ans=g(b)-g(a);
    
    print(ans);