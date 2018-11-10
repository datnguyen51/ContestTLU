#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc; // test case
	cin>>tc;
	int tl,ts;
	char let;
	int mo,sum[tc];
	for(int i=0; i<tc; i++)
	{
		map<char, int> ma;
		sum[i] = 0;
		cin>>tl;
		for(int j=0; j<tl; j++)
		{
			cin>>let>>mo;
			ma[let] = mo;
		}
		cin>>ts;
		string str;
		cin.ignore();
		for(int j=0; j<ts; j++)
		{
			// cin.ignore();
			getline(cin,str);
			for(int k=0; k<str.size(); k++)
				sum[i] += ma[str[k]];
			// cout<<str<<endl;
		}
	}
	for(int i=0; i<tc; i++)
	{
		cout<<sum[i]/100<<".";
		if(sum[i]%100 < 10)
			cout<<0;
		cout<<sum[i]%100<<"$"<<endl;
	}
	return 0;	
}