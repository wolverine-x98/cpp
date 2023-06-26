#include<iostream>//header file.
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"\n"<<"enter 3 digit number to find sum ";
	cin>>n;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	cout<<"\n"<<"sum of digit="<<sum;
	return 0;
}
