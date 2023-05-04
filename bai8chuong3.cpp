#include<iostream>
int main()
{
	float S=0;
	int i=1;
	float A;
	std::cin>>A;
   while(S<=A)
   {
     S=S+(float)1/i;
     i++;
    }
    std::cout<<i-1;
}

