#include <iostream>
using namespace std;
int main()
{
	bool count(int n);
	int sum=0;
	long int num;
	cin>>num;
	for (long int i=1;i<num;i++)
	{
		sum+=count(i);
	}
	cout<<sum<<endl;
	return 0;
}

bool count(int n)
{
	int add=0;     //计算约数的和
	int sum=0;    //计算完数个数
	for (int i=1;i<n;i++)
	{
		if(!(n%i)) 
			add+=i;
	}
	if (add==n)
		return 1;
	else
		return 0;
}
