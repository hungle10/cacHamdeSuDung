#include<iostream>
using namespace std;
void nhapMang(int A[],int &n);
void lietKe(int A[],int n,int B[]);
bool kiemTraTangDan(int X[],int nX);
void xuat(int A[],int nA);
int tinhTong(int A[],int nA);
int main()
{
	int A[100];
	int n;
	int B[100];
	nhapMang(A,n);
	lietKe(A,n,B);
}
void nhapMang(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>A[i];
}
void lietKe(int A[],int n,int B[])
{
	int C[100];
	int nC;
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	   for(int chieuDai=1;chieuDai<=n;chieuDai++)
	   {
	   	   int nB=0;
	       for(int j=i;j<chieuDai;j++)
	           	  B[nB++]=A[j];
	       if(kiemTraTangDan(B,nB)==true)
	          {
	          	int kq=tinhTong(B,nB);
	          	if(kq>max)
	          	   {
	          	   	 nC=0;
	          	   	 for(int k=0;k<nB;k++)
	          	   	    C[nC++]=B[k];
	          	   	max=kq;
	          	   	}
	          }
	          	
	          	
	    }
	xuat(C,nC);
}
bool kiemTraTangDan(int X[],int nX)
{
	for(int i=0;i<nX-1;i++)
	   if(X[i]>X[i+1])
	      return false;
	return true;
}
void xuat(int A[],int nA)
{
	for(int i=0;i<nA;i++)
	    cout<<A[i]<<" ";
	cout<<endl;
}
int tinhTong(int A[],int nA)
{
	int kq=0;
	for(int i=0;i<nA;i++)
	kq=kq+A[i];
    return kq;
}
