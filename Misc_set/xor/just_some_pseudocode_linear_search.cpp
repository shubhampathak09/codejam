// psedeocode

start=n;

end=-1;

for(int i=0;i<n;i++)
{
	
	if(s[i]==1)
{
	
	start=min(start,i);
	end=max(end,i);
	
	
}

for(int i=start;i<=end;i++)
{
	if(s[i]==0)
	return false;
	
}
return true;

}
