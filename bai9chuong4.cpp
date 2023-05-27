//UCLN cua mang
#include<iostream>
void nhap(int A[],int &n);
int timUCLNMang(int A[],int n);
int timUCLN2So(int a,int b);
int main()
{
	int A[100];
    int n;
    nhap(A,n);
    int kq=timUCLNMang(A,n);
    std::cout<<kq;
	return 0;
}
void nhap(int A[],int &n)
{
	std::cin>>n;
	for(int i=0;i<n;i++)
	   std::cin>>A[i];
}
int timUCLNMang(int A[],int n)
{
	int uc=A[0];
	for(int i=1;i<n;i++)
	    uc=timUCLN2So(A[i],uc);
	return uc;
}
int timUCLN2So(int a,int b)
{
	while(a!=b)
	  if(a>b)
	     a=a-b;
	    else 
	    b=b-a;
	return a;
}
