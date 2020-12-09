#include<iostream>
using namespace std;
int main()
{
	int a[]={-7,1,5,2,-4,3,0};
	int arr[7];
	int i;
	arr[0]=a[0];
	for (int i=1;i<7;i++)
	{
		arr[i]=arr[i-1]+a[i];
	}		
	for(int i=1;i<6;i++)
	{
	if(arr[i-1]==arr[6]-arr[i])
	{
		cout<<i;
	}
  }
}
