//1^1+5^2+3^3=153
#include<iostream>
#include<math.h>
using namespace std;
bool soAmstrong(int x);
long long xuLy(int x);
int soMu(int x);
int main()
{
   int n;
   cin>>n;
   long long kq=xuLy(n);
   cout<<kq;
}
long long xuLy(int x)
{
	long long kq=0;
	int mu=soMu(x);
	while(x!=0)
	{
		int temp=x%10;
		kq=kq+pow(temp,mu);
		x=x/10;
	}
	return kq;
}
int soMu(int x)
{
	int somu=0;
	while(x!=0)
	{
		x=x/10;
		somu++;
	}
	return somu;
}
	
		
