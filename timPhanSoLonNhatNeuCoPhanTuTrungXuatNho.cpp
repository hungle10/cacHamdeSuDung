//TIM PHAN SO LON NHAT NEU NHIEU PHAN SO NHU NHAU XUAT PHAN SO CO VI TRI NHO NHAT
#include<iostream>
struct PHANSO{
	int tu,mau;
};
using namespace std;
void nhapMang(PHANSO A[],int n);
int viTri(PHANSO A[],int n);
int main()
{
	int n;
	cin>>n;
	PHANSO A[99];
	nhapMang(A,n);
	int kq=viTri(A,n);
	cout<<A[kq].tu<<" "<<A[kq].mau;
}
void nhapMang(PHANSO A[],int n)
{
	for(int i=0;i<n;i++)
	   cin>>A[i].tu>>A[i].mau;
}
int viTri(PHANSO A[],int n)
{
	double max=INT_MIN;
	int index;
	double kq;
	for(int i=0;i<n;i++)
	   {
	   	  kq=(float)A[i].tu/A[i].mau;
	   	  if(kq>max)
	   	    {
	   	    	max=kq;
	   	        index=i;
	   	    	
	   	    }
	   	  if(kq==max&&i<index)
	   	     	index=i;
	   	}
	return index;
}
	   	    	
	   	    	
	
