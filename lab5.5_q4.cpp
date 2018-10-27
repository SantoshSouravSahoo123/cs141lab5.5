#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sp,st;
cout<<"enter the nos of rows you in your pattern"<<endl;
cin>>n;
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=i-1;sp++)
		{
		cout<<" ";
		}
		for(st=1;st<=n;st++)
		{
		cout<<"*";
		}cout<<endl;
	}
return 0;
}
