#include<bits/stdc++.h>
using namespace std;
vector<int> arr;  //Array
int n; //Size Of Array
int v; //Value To Search
int mid;

int EndingIndex(int low,int high)
{
	int r=-1 ;
	// USING BINARY SEARCH
	while(low<=high)
	{
    //	cout<<r<<"\n";	
	mid=(low+high)/2; //to get mid value
	if(arr[mid]==v)
	{
		r=mid;
		if(mid>r)
		{
			r=mid; //To Get A Max Index Than Already Encountered Index With Required Value
		}
		low=mid+1;		
	}		
	else if(arr[mid]<v)
	{
		// If Mid Is Less Than Required Value LOW=MID+1
		low=mid+1;
	}
	else
	{
		// If Mid Is Greater Than Required Value HIGH=MID-1
		high=mid-1;
	}
   } 
	//return Least or first occurance of Required element in an array with  DUPLICATES AND SORTED ORDER
	return r;
}

int main()
{
	cin>>n;
	int result;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		arr.push_back(data);
	}
	cout<<"Enter A Value To Search ";
	cin>>v;
	result=EndingIndex(0,n-1);
	if(result==-1)
	{
		cout<<"Element Not Found";
	}
	else
	{
		cout<<result;
	}
}
