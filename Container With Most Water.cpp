#include<bits/stdc++.h>
using namespace std;
vector<int> container;
int n;
int WaterCapacity()
{
	int left=0,right=n-1,result=0;
	while(left<right)
	{
		int capacity;
		if(container[left]<container[right])
		{
			capacity=container[left]*(right-left);
			left++;
		}
		else
		{
			capacity=container[right]*(right-left);
			right--;
		}
		if(result<capacity)
		{
			result=capacity;
		}
		
	}
	return result;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		container.push_back(d);

	}
	cout<<WaterCapacity();
	return 0;
}
