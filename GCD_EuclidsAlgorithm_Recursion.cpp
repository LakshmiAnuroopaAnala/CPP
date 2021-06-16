#include<bits/stdc++.h>
using namespace std;
int Gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	if(a>b)
	{
		return Gcd(b,a%b);
	}
	else
	{
		return Gcd(b,b%a);
		}	
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<Gcd(a,b);
	return 0;
}
