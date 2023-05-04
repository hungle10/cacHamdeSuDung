#include<string.h>
#include<iostream>
#define SIZE 100
int tongGiaTriSoNguyen(char A[]);
int main()
{
	char A[SIZE];
	gets(A);
    int kq=tongGiaTriSoNguyen(A);
    std::cout<<kq;
}
int tongGiaTriSoNguyen(char A[])
{
	int so=0;
	int tong=0;
	int len=strlen(A);
	int i=0;
	while(i<=len)
	{
		if(A[i]>='0'&&A[i]<='9')
		   so=so*10+(A[i]-'0');
		else 
		  {
		    tong=tong+so;
			so=0;
			}
	
	i++;
	}
	return tong;
}

	     
