#include<iostream>
using namespace std;
int main()
{
	int n,t;
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
	int l[t];
	int r[t];
	PrefixSum[0]=arr[0];
	for(int j=1;j<n;j++)
	{
	   	PrefixSum[j]=PrefixSum[j-1]+arr[j];
	}
	for(int a=0;a<n;a++)
	{
	   	cout<<PrefixSum[a]<<"\n";
	}
	for(int k=0;k<t;k++)
	{
		cout<<"Enter L And R";
		cout<<"\n";
		cin>>l[k];
		cin>>r[k];
		int p=r[k];
		int q=l[k];
		if (l[k]==0)
		{
			cout<<PrefixSum[p];
		}
		if(l[k]>0)
		{
			cout<<"Result-"<<PrefixSum[p]-PrefixSum[q-1];
		}
	}
	return 0;
}
