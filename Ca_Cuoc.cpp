#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i=0;
	int sum, amax;
	int a[10000];
	while(cin>>n && n>0 && n<=10000 && n!=0)
	{
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		amax = 0;
		for(int i=0; i<n; i++)
		{
			sum = 0;
			for(int j=i; j<n; j++)
			{
				sum += a[j];
				amax = max(amax, sum);
			}
		}
		if(amax > 0)
			cout<<amax<<endl;
		else
			cout<<"LOSE"<<endl;	
	}
	return 0;
}