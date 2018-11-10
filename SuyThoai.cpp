#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[1000];
	int b[1000];
	int test;
	cin>>test;
	for(int i=0; i<test; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>a[j];
		}
		sort(a,a+3);
		b[i] = a[1];
	}
	for(int i=0; i<test; i++)
	{
		cout<<"Case "<<i+1<<": "<<b[i]<<endl;
	}
	return 0;
}