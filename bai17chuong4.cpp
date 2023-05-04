#include<iostream>
#define SIZE 100
using namespace std;
int A[SIZE],B[SIZE];
int n;
int thoiGianToiUu=INT_MAX;
int P[SIZE];
int phuongAn[SIZE];
void nhapMang();
void lietKeNhiPhan(int k);
void tinhThoiGian();
void xuat();
int main()
{
	nhapMang();
	lietKeNhiPhan(0);
	xuat();
}
void nhapMang()
{
	cin>>n;
	cout<<"Moi nhap mang A";
	for(int i=0;i<n;i++)
	   cin>>A[i];
	cout<<"Moi nhap mang B";
	for(int i=0;i<n;i++)
	    cin>>B[i];
}
void lietKeNhiPhan(int k)
{
	if(k==n)
	  tinhThoiGian();
	else 
	   {
	      for(int i=0;i<=1;i++)
	   {
	   	  P[k]=i;
	   	  lietKeNhiPhan(k+1);
	   	}
	   	}
}

void tinhThoiGian()
{
	int tA=0;
	int tB=0;
	for(int i=0;i<n;i++)
	   if(P[i]==0)
	      tA=tA+A[i];
	    else
	       tB=tB+B[i];
	int tg;
	if(tA>tB)
	   tg=tA;
	else 
	   tg=tB;
	if(tg<thoiGianToiUu)
	   {
	      thoiGianToiUu=tg;
	      for(int i=0;i<n;i++)
	         phuongAn[i]=P[i];
	    }
	}
void xuat()
{
	for(int i=0;i<n;i++)
	   cout<<phuongAn[i];
}
	    
	
