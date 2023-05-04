#include<iostream>
long double C(int k,int n);
int main()
{
	int k,n;
	std::cin>>k>>n;
	int kq=C(k,n);
	std::cout<<kq;
}
long double C(int k,int n)
{
	if(k==0||k==n)
	  return 1;
	else if(k==1)
	  return n;
	else return C(k-1,n-1)+C(k,n-1);
}
	  
