#include<iostream>
using namespace std;
void MaxSumSubArray(int n,int *arr)
{
	int global=arr[0];
	int current=arr[0];
	int c=1;
	for(int i=1;i<n;i++)
	{
		if(current<(current+arr[i]))
		{
			current=current+arr[i];
			c++;
		}
		if(global<current)
		{
			global=current;
		}
	}
	cout<<global<<" "<<c;
}
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	MaxSumSubArray(n,arr);
	return 0;
}
