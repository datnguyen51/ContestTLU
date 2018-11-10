#include <bits/stdc++.h>
using namespace std;
void check(vector<vector<char>> a, int t,int n,int m)
{
	int dem=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(a.at(i).at(j) == 'B')
			{
				dem++;
				if(dem==(t+1)/2)
				{
					cout<<i+1<<" "<<j+1<<endl;
					break;
				}
			}
		}
	}
}
int main()
{
	int n,m,t=0;
	cin>>n>>m;
	vector<vector<char>> a;
	a.resize(n);
	if(n>=1 && n<=115 && m>=1 && m<=115)
	{
		for (int i = 0; i < n; i++)
		{
			a[i].resize(m);
			for (int j = 0; j < m ; j++)
			{
				cin>>a.at(i).at(j);
				if(a.at(i).at(j) == 'B')
					t++;	
			}
		}
	}
	check(a,t,n,m);
	return 0;
}