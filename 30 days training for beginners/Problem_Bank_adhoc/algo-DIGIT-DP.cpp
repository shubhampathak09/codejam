// digit dp
// range [l,r]->digit sum =?
// brute force?
// l and r can be very large as this can be10^18
// to reduce time complexity wu go for go digit dp
//g(x)->[1,x]
//
// 1 2 3 4 5 6 7 8 9
//  g()
//  sum-> 5 to 9
//g(9) 1+2+3+4+..+9
//g(5-9)=g(9) - g(4)
//[l,r]=g(r)-g(l-1) okay
//
// x=3245
// recur   1 2 3 4
// number= - - - -
//         0-9(3-?up bounf)
//         0 1 2 3 ->constraint
//         2 0-9 0-9 0-9 no restriction
// restricted vs inrestricted
// int g(pos,tight,sum) 1<y<x 
// pos=18 ->20 tight =2, sum=20*9=180 according to qquestion
int dp[20][2][180];
// - - - - - 3->pos 1 2 4


// jsut algorithm n ot tested

int g(int pos,int tight,int sum)
{
	if(pos==digits.size())
	return sum;
	
	else if(dp[pos][tight][sum]!=-1)
	return dp[pos][tight][sum];
	
	else if(tight==1)
	{
		for(int i=0;i<=digit[pos];i++)
		{
			//0 1 2 3
			if(i==digit[pos])
			{
				return g(pos+1,1,sum+i)
			}
			
			
		}
		else
		{
			for(int i=0;i<=9;i++)
			{
				return g(pos+1,0,sum+i);
			}
		}
	}
	
}

int main()
{
	memset(dp,-1,sizezof(dp));
}
