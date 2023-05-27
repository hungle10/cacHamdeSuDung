#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char A[99];
	cin>>A;
	int n=strlen(A);
	int i=0;
    int	diem=0;
    int tam=0;
	while(i<=n)
	{
		while(A[i]=='V')
		  {
		  	 diem=diem+1;
		  	 tam=tam+diem;
		  	 i++;
		 }
	diem=0;
	i++;
	}
	cout<<tam;
}

