//including the library
#include<iostream>
using namespace std;
int main()
{
//declaring the variables
	int n,i,sp,st;
//asking the user to enter the nos of rows
cout<<"enter the number of rows you want in your pattern"<<endl;
cin>>n;
//iterate through the rows
	for(i=1;i<=n;i++)
	{
//printing the spaces
		for(sp=1;sp<=n-i;sp++)
		{
		cout<<" ";	
		}
//printing the stars
		for(st=1;st<=n;st++)
		{
		cout<<"*";
		}
//ending the line
cout<<endl;
	}
return 0;	
}
