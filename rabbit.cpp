#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include<malloc.h>
using namespace std;
int main()
{
int n,m,i,tem1=1,tem2=1;
	cin>>n;
	if(n<3) 
	{
		m=1;
		cout<<'1'<<endl;
		return 0;
	}
	for (i=3; i<=n; ++i) 
	{
		m=tem1+tem2;
		tem1=tem2;
		tem2=m;
	}
    cout<<m<<endl;
	return 0;
}
