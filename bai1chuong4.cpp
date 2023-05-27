//cap phat dong
//de quy tim gia tri nho nhat cac phan tu trong mang 1D
#include<iostream>
void nhap(int A[],int n);
int timMin(int A[],int n);
int main()
{
	int n;
	std::cin>>n;
	int *A=new int[n];
    nhap(A,n);
	int max=timMin(A,n);
	std::cout<<max;
	delete[] A;
	A=NULL;
}
void nhap(int A[],int n)
{
	for(int i=0;i<n;i++)
	   std::cin>>A[i];
}
int timMin(int A[],int n)
{
	if(n==1)
	  return A[0];
	else if(A[n-1]<timMin(A,n-1))
	  return A[n-1];
	else 
	   return timMin(A,n-1);
}
