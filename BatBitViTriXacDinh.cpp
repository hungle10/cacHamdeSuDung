#include<iostream>
using namespace std;
void nhapMang(int A[],int &nA);
int demBitPhanTu(int n);
void batBit(int A[],int nA);
void xuat(int A[],int nA);
void batBitTungCai(int &n,int k);
// BAT BIT O VI TRI LE HOAC CHAN 
int main()
{
	int A[1000];
	int nA;
	nhapMang(A,nA);
    batBit(A,nA);
    xuat(A,nA);
}
void nhapMang(int A[],int &nA)
{
	cin>>nA;
	for(int i=0;i<nA;i++)
	   cin>>A[i];
}
int demBitPhanTu(int n)
{
	int cnt=0;
	while(n!=0)
	  { cnt++;
	   n=n>>1;
	   }
	return cnt;
}
void batBit(int A[],int nA)
{
	for(int i=0;i<nA;i++)
	 {
	 int kq=demBitPhanTu(A[i]);
	    for(int j=0;j<kq;j++)
	       if(j%2==0)
		       batBitTungCai(A[i],j); 
	}
}
void xuat(int A[],int nA)
{
	int max=INT_MIN;
	for(int i=0;i<nA;i++)
	   if(A[i]>max)
	     max=A[i];
	cout<<max;
}
void batBitTungCai(int &n,int k)
{
	n=n|(0x1<<k);
}
