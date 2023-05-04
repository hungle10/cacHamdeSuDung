#include<iostream>
#define SIZE 100
using namespace std;
int C[SIZE][SIZE];
int A[SIZE];
int B[SIZE]={0};
int chiphitoiuu=INT_MAX;
int H[SIZE];
int n;
void nhapMangGiaTien();
void tinhChiPhi();
void hoanVi(int k);
void xuat();
int main()
{
	nhapMangGiaTien();
	hoanVi(0);
	xuat();
}
void nhapMangGiaTien()
{
	cin>>n;
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	  cin>>C[i][j];
}
void tinhChiPhi()
{
	int chiphi=0;
	for(int i=0;i<n;i++)
	    chiphi=chiphi+C[A[i]][A[i+1]];
	chiphi=chiphi+C[A[n-1]][A[0]];
	if(chiphi<chiphitoiuu)
	   {
	   	  chiphitoiuu=chiphi;
	   	  for(int j=0;j<n;j++)
	   	     H[j]=A[j];
	   	}
}
void hoanVi(int k)
{
	if(k==n)
	   tinhChiPhi();
	else 
	 {
	   for(int i=0;i<n;i++)
	      if(B[i]==0)
	       {
	       	   A[k]=i;
	       	   B[i]=1;
	       	   hoanVi(k+1);
	       	   B[i]=0;
	       	}
	    }
}
void xuat()
{
	for(int i=0;i<n;i++)
	   cout<<H[i];
}
	    	
	
