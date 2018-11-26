#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
<<<<<<< HEAD
	long long int a=0, b=1, c=1;
=======
	int a=0, b=1, c=1;
>>>>>>> 8f71415e64d8208bef80e75454be1e174cd1180f
	cin>>n>>m;
	int v[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>v[i][j];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			if(i>j)
				a += v[i][j];
			if(i<j)
<<<<<<< HEAD
			{
				// cout<<v[i][j]<<"    ";
				b *= v[i][j];
				// cout<<b<<"    ";
			}
			if(i==j)
				c *= v[i][j];
		}
	// cout<<"======================"<<endl;
	// for(int i=0; i<n; i++)
	// {
	// 	for(int j=0; j<n; j++)
	// 	{
	// 		if(v[i][j]<10)
	// 			cout<<v[i][j]<<"  ";
	// 		else
	// 			cout<<v[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// cout<<a<<endl;
	// cout<<b<<endl;
	// cout<<c<<endl;
=======
				b *= v[i][j];
			if(i==j)
				c *= v[i][j];
		}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
>>>>>>> 8f71415e64d8208bef80e75454be1e174cd1180f
	cout<<(a+b)%c<<endl;
	return 0;
}