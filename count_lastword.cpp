#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[128];
	int len=0,start=0,n;
	cin.get(str,128,'\n');
	n=strlen(str);
	if (n==0) 
		return -1;
	if(str[n-1]!=' ') 
		start=1;
	for (int i=n-1;i>=0;i--)
	{
		if (str[i]!=' ')
		{
         len++;
		 start=1;
		}
		else
		{
			if(start==1) 
				break;
			else 
				continue;
		}
		 if(i==0) 
			 break;
	}
	cout<<len<<endl;
	return 0;
}


