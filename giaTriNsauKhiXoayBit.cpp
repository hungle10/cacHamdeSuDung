//CHO SO NGUYEN N,SAU KHI XOAY BIT QUA TRAI K LAN ,XUAT RA SO NGUYEN 
//SAU KHI XOAY BIT N CO THE LA SO AM HOAC SO DUONG
// 32 BIT

#include<iostream>
#include<math.h>

int layBit(int n,int k);
void xoayMang(int A[],int k);
void xuLySoDuong(int A[],int n,int k);
void xuLySoAm(int A[],int n,int k);
void chuyenThanhSoBu2(int A[],int iA);

using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int A[32];
	if(n<0)
	  {
	  	xuLySoAm(A,n,k);
	  }
	else 
	   xuLySoDuong(A,n,k);
}
int layBit(int n,int k)
{
	return (n>>k)&0x1;
}
void xoayMang(int A[],int k) //XOAY SANG PHAI
{
	while(k>0)
	{
		int tam=A[31];
		for(int i=31;i>=0;i--)
		   A[i]=A[i-1];
		   A[0]=tam;
		k--;
	}
    /*while(k>0)
    {
        int tam=A[0];
        for(int i=0;i<32;i++)    //XOAY SANG TRAI
            A[i]=A[i+1];
            A[nA-1]=tam;
        k--
    }*/
}
void xuLySoDuong(int A[],int n,int k)
{
	int iA=0;
	for(int i=0;i<32;i++)
	   {
	   	 int bit=layBit(n,i);
	   	 A[iA++]=bit;
	   	}
    xoayMang(A,k);// so duong sau khi xoay mang co the la so am hoac duong
   if(A[31]==1) //BIT TRAI NHAT LA SO 1 THI SO NAY LA SO AM
	   {
	   	  chuyenThanhSoBu2(A,iA); // CHUYEN LAI THANH NHI PHAN SO DUONG
	   	  long long so=0;
    for(int i=0;i<32;i++)
	   so=so+A[i]*pow(2,i);
	cout<<-so; // SOAM = -SODUONG
	   }
	   else
	   {
	   	  long long so=0;
    for(int i=0;i<32;i++)
	   so=so+A[i]*pow(2,i);
	cout<<so;
	   }
}
void xuLySoAm(int A[],int n,int k)
{
	int iA=0;
		for(int i=0;i<32;i++)
	   {
	   	 int bit=layBit(n,i);
	   	 A[iA++]=bit;
       }
    xoayMang(A,k); // so am sau khi xoay mang co the la so duong hoac so am
	if(A[31]==1)//SO SAU KHI CHUYEN LA SO AM 
	   {
	   	  chuyenThanhSoBu2(A,iA);
	   	  long long so=0;
    for(int i=0;i<32;i++)
	   so=so+A[i]*pow(2,i);
	cout<<-so;
	   }
	   else// SO SAU KHI CHUYEN LA SO DUONG 
	     {
	     	long long so=0;
    for(int i=0;i<32;i++)
	   so=so+A[i]*pow(2,i);
	cout<<so;
	  }   	 
}
void chuyenThanhSoBu2(int A[],int iA)
{
	int nA=0;
    int tam;
    while(nA<=iA)
    {
    	if(A[nA]==1)
    	  { 
		    tam=nA;
		    break;
		  }
		nA++;
	}
    for(int i=tam+1;i<32;i++)
      {
	    if(A[i]==0)
          A[i]=1;
        else 
          A[i]=0;
       }
}
	
