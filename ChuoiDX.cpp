#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool check(vector<char> s, vector<char> t, int n, int m)
{
	int dem=0;
	if((n-m)>1)
	{
		return false;
	}
	for (int i=0; i<n; i++)
	{
		if(s.at(i)=='*')
			dem++;
		if(dem==2)
		{
			return false;
			break;
		}
		for (int j=0; j<9; j++)
		{
			if(s.at(i)-'0'==j)
			{
				return false;
				break;
			}
		}
	}
	for (int i=0; i<m; i++)
	{
		if(t.at(i)=='*')
		{
			return false;
			break;
		}
		for (int j=0; j<9; j++)
		{
			if(t.at(i)-'0'==j)
			{
				return false;
				break;
			}
		}
	}
	return true;
}
void run(vector<char> s, vector<char> t, int n, int m)
{
	if(check(s,t,n,m))
	{
		bool flag = false;
		if(n==m)
		{
			for (int i=0; i<n; i++)
			{
				if(s.at(i)=='*')
				{
					i++;
					continue;
				}
				else if(s.at(i)==t.at(i))
					flag=true;
				else
				{
					flag = false;
					break;
				}
			}
		}
		else if(n>m)
		{
			for (int i=0, j=0; i<n, j<m; i++, j++)
			{
				if(s.at(i)=='*')
				{
					i++;
					continue;
				}
				else if(s.at(i)==t.at(j))
					flag=true;
				else
				{
					flag = false;
					break;
				}
			}
		}
		else
		{
			int dem = m-n;
			for (int i=0, j=0; i<n, j<m; i++, j++)
			{
				if(s.at(i)=='*')
				{
					i++;
					j=j+dem;
					continue;
				}
				else if(s.at(i)==t.at(j))
					flag=true;
				else
				{
					flag = false;
					break;
				}
			} 
		}
		if(flag == true)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;
}
int main()
{
	int n, m;
	vector<char> s;
	vector<char> t;
	cin>>n>>m;
	s.resize(n);
	t.resize(m);
	if(n>=1 && n<=pow(10,5) && m>=1 && m<=pow(10,5))
	{
		for(int i=0; i<n; i++)
		{
			cin>>s.at(i);
		}
		for(int j=0; j<m; j++)
		{
			cin>>t.at(j);
		}
	}
	run(s,t,n,m);
	return 0;
}
