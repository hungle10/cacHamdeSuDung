#include<iostream>
#define SIZE 50
using namespace std;
void sinhNhiPhan(int A[],int n);
int viTri0DauTien(int A[],int n);
void xuat(int A[],int n);
int main()
{
	int A[SIZE]={0};
	int n;
	cin>>n;
	sinhNhiPhan(A,n);
}
void sinhNhiPhan(int A[],int n)
{
	int k=n-1;
	xuat(A,n);
	while(k!=-1)
	{
		A[k]=1;
		for(int i=k+1;i<n;i++)
		   A[i]=0;
		xuat(A,n);
		k=viTri0DauTien(A,n);
	}
}
int viTri0DauTien(int A[],int n)
{
	int i=n-1;
	while(i>=0&&A[i]==1)
	    i--;
	return i;
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
	   cout<<A[i];
	cout<<endl;
}
