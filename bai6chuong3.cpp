#include<iostream>
#include<math.h>
#include<iomanip>
int main()
{
	long double P=1;
	long double S=1;
	long double n;
	long double x;
	int i=1;
	std::cin>>n>>x;
	while(i<=n)
	  {
	  	P=P*x/i;
          S=S+P;
	  	i++;
	   }
	std::cout<<std::setprecision(2)<<std::fixed<<S;
}
