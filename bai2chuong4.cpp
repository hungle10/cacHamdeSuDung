//DE QUY
//CAP PHAT DONG TIM TONG CAC PHAN TU TRONG MANG 1D
#include<iostream>
void nhap(int A[],int n);
int tinhTong(int A[],int n);
int main()
{
	int n;
	std::cin>>n;
	int *A=new int[n];
	nhap(A,n);
	int kq=tinhTong(A,n);
	std::cout<<kq;
	delete []A;
	A=NULL;
}
void nhap(int A[],int n)
{
	for(int i=0;i<n;i++)
	   std::cin>>A[i];
}
int tinhTong(int A[],int n)
{
	if(n==1)
	return A[0];
	else 
	return A[n-1]+tinhTong(A,n-2);
}
	
