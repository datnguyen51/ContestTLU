#include <bits/stdc++.h>
using namespace std;
int n, k;
int sum=0;
int main()
{
	cin>>n>>k;
	int x[n],m;
	bool Mark[n];
	map<int , int> s;
	s[0] = k;
	for(int i=0; i<n; i++)
	{
		cin>>x[i]>>m;
		Mark[x[i]] = false;
		s[x[i]] = m;
	}
	for(int i=n-1; i>=0; i--)
	{
		if(Mark[x[i]]==false)
		{
			if(s[0]-s[x[i]]>0)
			{
				s[0] = s[0]-s[x[i]];
				Mark[x[i]] = true;
				sum += abs(x[i])*2;
			}
			else
				s[0] = k;
		}
		cout<<sum<<endl;
	}
	cout<<sum<<endl;
	for(int i=0; i<=s[n-1]; i++)
	{}
	for(int i=0; i<n; i++)
		cout<<s[x[i]]<<" ";
	cout<<endl;
	return 0;
}