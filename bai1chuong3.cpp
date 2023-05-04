#include<iostream>
long long pow(int x,int p);
int main()
{
	int x;
	int p;
	std::cin>>x>>p;
	long long kq=pow(x,p);
	std::cout<<kq;
}
long long pow(int x,int p)
{
	long long S=1;
	for(int i=1;i<=p;i++)
	  S=S*x;
	return S;
}

