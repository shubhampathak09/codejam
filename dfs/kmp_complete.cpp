//#include<bits/stdc++.h>
//using namespace std;
//
//
//int kmp(string text,string pattern)
//{
//	
//	int n=text.length(); // length of text string
//	int m=pattern.length(); // length of pattern
////	cout<<m<<endl;
//	int count=0;
//	string s=pattern + "#" + text;
//	//cout<<s<<endl;
//	int len=s.length();
//	
//	int prefix[len];
//	prefix[0]=0;
////	int l;
//	for(int i=1;i<len;i++)
//	{   int l;
//		l=prefix[i-1];
//		while(l>0&&prefix[i]!=prefix[l])
//		{
//			l=prefix[l-1];
//		}
//		
//		if(s[i]==s[l])
//		l++;
//		prefix[i]=l;
//		cout<<prefix[i]<<endl;
//		if(prefix[i]==m)
//		count++;
//	}
//		
//	return count;
//}
//
//
//int main()
//{
//	string s="geeksforgeeks";
//	string p="geek";
//	cout<<kmp(s,p);
//}
