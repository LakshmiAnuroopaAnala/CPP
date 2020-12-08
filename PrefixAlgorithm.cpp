#include<iostream>
using namespace std;
int main()
{
	int n,t,l,r;
	cout<<"Enter Size Of Array";
	cin>>n;
	int arr[n];
	int PrefixSum[n];
	cout<<"Enter An Array\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Number Of Test Cases";
	cin>>t;
	PrefixSum[0]=arr[0];
	for(int j=1;j<n;j++)
	{
	   	PrefixSum[j]=PrefixSum[j-1]+arr[j];
	}
	for(int k=0;k<t;k++)
	{
		cout<<"Enter L And R";
		cout<<"\n";
		cin>>l;
		cin>>r;
		if (l==0)
		{
			cout<<PrefixSum[r];
		}
		if(l>0)
		{
			cout<<"Result-"<<PrefixSum[r]-PrefixSum[l-1];
		}
	}
	return 0;
}
