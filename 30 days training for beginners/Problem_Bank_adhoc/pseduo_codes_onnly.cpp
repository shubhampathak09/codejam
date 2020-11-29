// pseduo code fot reverse a  node in ll

*curr=head
*prev=NULL
*temp=NULL

// this will reverse the ll
1. ll reverse
while(curr!=NULL)
{

temp=curr->next;
curr->next=prev;
prev=curr;
curr=temp;

}
2. tree to doubly ll
static node*prev
if(prev==NULL)
{
	head=root;
}
else
{
	root->left=prev;
	prev->right=root;
}
prev=root;
// this for tree to double linled list
}

3. min coin reqy for given sum
// special intialsation for just 1 coin
if(j%coins[0]==0)
{
	dp[1][j]=j/coins[0];
}
else
dp[1][j]=INT_MAX-1;

// same as unboun knapsack
min(dp[i-1][j],1+dp[i][j-coins[i-1]);

---------------------------------------------
