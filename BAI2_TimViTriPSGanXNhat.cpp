#include<iostream>
#include<math.h>
struct PHANSO
{
	int tu,mau;
};
using namespace std;
void nhapMang(PHANSO A[],int n);
int viTri(PHANSO A[],int n,double x);
int main()
{
	PHANSO A[100];
	int n;
	double x;
	cin>>n>>x;
	nhapMang(A,n);
	int kq=viTri(A,n,x);
    cout<<kq;
}
void nhapMang(PHANSO A[],int n)
{
	for(int i=0;i<n;i++)
	    cin>>A[i].tu>>A[i].mau;
}
int viTri(PHANSO A[],int n,double x)
{
     double min=10000000;
     int temp=0;
     for(int i=0;i<n;i++)
     {
     	 double kq=(double)A[i].tu/A[i].mau;
	   	 double tam=fabs(kq-x);
	   	 if(tam<min)
	   	 {
	   	 	min=tam;
	   	 	temp=i;
	   	}
	}
	return temp;
}
