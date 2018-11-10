#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		vector<int> v(n);
		vector<bool> m(n);
		for(int j=0; j<n; j++)
		{
			cin>>v[j];
		}
		int f = 1;
		for(int i=0; i<n-1; i++)
		{
			int a = abs(v[i]-v[i+1]);
			if(a==0 || a>=n)
				 f=0;
			else m[a] = true;
		}	
		for(int i=1; i<=n-1; i++)
		{
			if(!m[i])
				f=0;
		}
		if(f==1)
			cout<<"Jolly";
		else
			cout<<"Not jolly";
		cout<<endl;
	}
	return 0;
}