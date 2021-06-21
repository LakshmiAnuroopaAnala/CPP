#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[9]={3,5,17,28,0,0,0,0,0};
	int b[6]={1,4,15,22,56,34};
	vector<int> res;
	int i=0,j=0;
	while(i<5 && j<6)
	{
		if(a[i]<b[j])
		{
			res.push_back(a[i]);
			i++;
		}
		else
		{
			res.push_back(b[j]);
			j++;
		}
	}
	
	while(i<5)
	{
		res.push_back(a[i]);
		i++;	
	}
   
	while(j<6)
	{
		res.push_back(b[j]);
		j++;	
	}

	for(i=0;i<11;i++)
	{
		cout<<res[i]<<" ";
	}
	return 0;
}
