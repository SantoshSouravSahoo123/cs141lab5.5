#include<iostream>
using namespace std;
int main()
{
	int i,n;
cout<<"give me the number of row of the pattern you want"<<endl;
cin>>n;
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
			cout<<"*";
			}
			else
			{
			cout<<" ";
			}
		}cout<<endl;
	}
	
return 0;
}
