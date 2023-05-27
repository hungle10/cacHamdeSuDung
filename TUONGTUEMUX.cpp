#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
long double xuLy(double x,int n);
int main()
{
	double x;
	int n;
	cin>>x>>n;
	long double kq=xuLy(x,n);
	cout << setprecision(2) << fixed << kq;
}
long double xuLy(double x,int n)
{
	long double S=1;
    long double P=1;
	long long M=1;
	int i=1;
	while(i<=n)
	  {
	  	P=-P*x/i;
          S=S+P;
	  	i++;
	   }
	return S;
}

