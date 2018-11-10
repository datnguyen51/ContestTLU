#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n, k;
	cin>>n>>k;
	if(n<3 && k<3 || n>=3 && k<3)
		cout<<0<<endl;
	else if(k>n)
	{
		if(k>=n*2)
			cout<<0<<endl;
		else
			cout<<(2*n-k+1)/2<<endl;
	}
	else if(k==n)
	{
		if(k%2==0)
			cout<<k/2-1<<endl;
		else
			cout<<k/2<<endl;
	}
	else
	{
		if(k%2==0)
			cout<<k/2-1<<endl;
		else
			cout<<k/2<<endl;
	}
	return 0;
}