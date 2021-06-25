#include<bits/stdc++.h>
using namespace std;
vector<int> arr;  //Array
int n; //Size Of Array
int v; //Value To Search
int mid;

int Starting_Ending_Address(int low,int high,int dir)
{
	int r;
	if(dir==1)
	{
		r=n+1;
	}
	else
	{
		r=-1;
	}
	// USING BINARY SEARCH
	while(low<=high)
	{
    //	cout<<r<<"\n";	
	mid=(low+high)/2; //to get mid value
	if(arr[mid]==v)
	{
		
		if(mid<r && dir==1)   //To Get A Min Index Than Already Encountered Index With Required Value
		{
			r=mid;
			high=mid-1; 
		}
			
		if(mid>r && dir==0)   //To Get A Max Index Than Already Encountered Index With Required Value
		{
			r=mid;
			low=mid+1; 
		}
				
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
	int startAddress=Starting_Ending_Address(0,n-1,1);
	int endAddress=Starting_Ending_Address(0,n-1,0);
	if(endAddress>-1 && startAddress<n+1)
	{
		cout<<(endAddress-startAddress)+1;
	}
	else
	{
		cout<<"Element Not Found";
	}
}
