#include<iostream>
int main()
{
	long long P=0;
	long long S=1;
	int n;
	int i=1;
	std::cin>>n;
	while(i<=n)
	  {
	  	S=S*i;
	  	P=P+S;
	  	i++;
	   }
	std::cout<<P;
}
