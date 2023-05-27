#include<iostream>
#define SIZE 100
using namespace std;
void nhapMang2Chieu(int A[][SIZE],int &m,int &n);
void chuyenMang2ChieuThanh1Chieu(int A[][SIZE],int B[],int m,int n);
void xuatMang1Chieu(int B[],int nB);
int main()
{
	int m,n;
	int nB;
    int A[SIZE][SIZE];
	int B[SIZE*SIZE];
	nhapMang2Chieu(A,m,n);
	chuyenMang2ChieuThanh1Chieu(A,B,m,n);
	xuatMang1Chieu(B,n*m);
}
void nhapMang2Chieu(int A[][SIZE],int &m,int &n)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      cin>>A[i][j];
}
void chuyenMang2ChieuThanh1Chieu(int A[][SIZE],int B[],int m,int n)
{
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      B[i*n+j]=A[i][j];
	      
}
void xuatMang1Chieu(int B[],int nB)
{
	for(int i=0;i<nB;i++)
	   cout<<B[i];
}
