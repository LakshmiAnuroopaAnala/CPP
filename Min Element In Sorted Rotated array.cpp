#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int n,mid;
int MinInRotatedSortedArray(int low,int high)
{
	//If array has one element
	if(n==1)
	{
		return arr[0];
	}
	// If array is not in Rotated Manner
	if(arr[0]<arr[n-1])
	{
		return arr[0];
	}
	mid=(low+high)/2;
	if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1])
	{
		return arr[mid];
	}
	else if(arr[mid]<arr[n-1])
	{
		// high=mid-1
		MinInRotatedSortedArray(low,mid-1);
	}
	else
	{
		//low=mid+1
		MinInRotatedSortedArray(mid+1,high);	
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		arr.push_back(data);
	}
	cout<<MinInRotatedSortedArray(0,n-1);
}
