#include<iostream>
#define SIZE 100
using namespace std;
void nhapMang(int A[],int nA);
void chuyenMang1sang2(int B[][SIZE],int A[],int nA,int n);
void xuatMang(int B[][SIZE],int m,int n);
int main()
{
	int A[SIZE][SIZE];
	int B[SIZE*SIZE];
	int m,n;
	cin>>m>>n;
	int nB=m*n;
	nhapMang(B,nB);
	chuyenMang1sang2(A,B,nB,n);
	xuatMang(A,m,n);
}
void nhapMang(int A[],int nA)
{
	for(int i=0;i<nA;i++)
	    cin>>A[i];
}
void chuyenMang1sang2(int B[][SIZE],int A[],int nA,int n)
{
	for(int k=0;k<nA;k++)
	   B[k/n][k%n]=A[k];
}
void xuatMang(int B[][SIZE],int m,int n)
{
	for(int i=0;i<m;i++)
	   {
	   for(int j=0;j<n;j++)
	          cout<<B[i][j]<<" ";
	    cout<<endl;
	    }
}
