//TIM VI TRI CUA PHAN SO LON NHAT TRONG MANG
#include<iostream>
#define SIZE 99
using namespace std;
struct PHANSO {
    int tu,mau;
};
void nhapMang(PHANSO A[],int &n);
void chuanHoa(PHANSO &x);
int soSanh(PHANSO a,PHANSO b);
int xuLy(PHANSO A[],int n);
int xuLy(PHANSO A[],int n);
bool kiemTraMang(PHANSO A[],int n);
int main()
{
    int n;
     PHANSO A[SIZE];
     nhapMang(A,n);
     if(kiemTraMang(A,n)==true)
     {
     int kq=xuLy(A,n);
     cout<<kq;
     }
}
void nhapMang(PHANSO A[],int &n)
{
    cin>>n;
    for(int i=0;i<n;i++)
       cin>>A[i].tu>>A[i].mau;;
}
void chuanHoa(PHANSO &x)
{
	if(x.mau<0)
	{
		x.tu=-x.tu;
		x.mau=-x.mau;
	}
}
int soSanh(PHANSO a,PHANSO b)
{
	chuanHoa(a);
	chuanHoa(b);
	if(a.tu*b.mau>a.mau*b.tu)  //A>B
	    return 1;
	else
	   if(a.tu*b.mau<a.mau*b.tu)  //A<B
	      return -1;
	else 
	  return 0;
}
int xuLy(PHANSO A[],int n)
{
    PHANSO max=A[0];
    int vitri=0;
    for(int i=1;i<n-1;i++)
        {
        if(soSanh(A[i],max)==1)
            {
            max=A[i];
            vitri=i;
            }
        }
    return vitri;
}
bool kiemTraMang(PHANSO A[],int n)
{
    for(int i=0;i<n;i++)
       if(A[i].mau==0)
           return false;
    return true;
}
