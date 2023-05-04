#include<iostream>
int fibo(int n);
using namespace std;
int main()
{
	int n;
	cin>>n;
	int kq=fibo(n);
	cout<<kq;
}
int fibo(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}
