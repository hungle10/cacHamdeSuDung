#include<iostream>
#include<iomanip>
int main()
{
	double P=1;
	double S=1;
	double M;
	long long n;
	long long i=1;
	std::cin>>n;
	while(i<=n)
	  {
	  	S=S*i;
	  	M=(double)1/S;
	  	P=P+M;
	  	i++;
	   }
	std::cout<<std::setprecision(2)<<std::fixed<<P;
}
