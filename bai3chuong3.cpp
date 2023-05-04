#include<iostream>
#include<iomanip>
int main()
{
	long int i=1;
	 long double S=0;
     long double P=0;
     long double M=0;
	long int n;
	std::cin>>n;
	while(i<=n)
	{
		S=S+i;
		M=(float)1/S;
		P=P+M;
		i++;
	}
	 std::cout<<std::setprecision(6)<<std::fixed<<P;
}
