// sort strings 
// we will be using tries to sort string
// lets see how

#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<string>sample={"monday","tuesday","saturday","wednesday","friday"};
	
	sort(sample.begin(),sample.end());
	
	for(int o=0;o<sample.size();o++)
	cout<<sample[o]<<" ";
}
