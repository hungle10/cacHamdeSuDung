#include<iostream>
using namespace std;
int main()
{
	long int i=1;
	long long S=0;
    long long P=0;
	long int n;
	cin>>n;
	while(i<=n)
	{
		S=S+i;
		P=P+S;
		i++;
	}
	 cout<<P;
}
	
