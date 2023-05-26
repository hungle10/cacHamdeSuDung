#include<iostream>
#include<math.h>
using namespace std;
void nhapMang(double A[],int &n);
void xuat(double X[],int n);
int main()
{
    double A[10000];
    int l[10000];
	int n;
	nhapMang(A,n);
	A[0]=-100000;
	A[n+1]=100000;
	for(int i=1;i<=n+1;i++)
	   {
	   	l[i]=1;
	   	 for(int j=0;j<i;j++)
	   	     {
                if(A[j]<A[i]&&l[i]<l[j]+1)
                  l[i]=l[j]+1;
	   	     }
	   	}
		
     //cout<<l[n+1]-2; //neu de keu xuat ra do dai 
    double P[10000];     //truy vet day con 
    int iP=0;
	double x=l[n];
	for(int i=n;i>0;i--)
	   if(l[i]==x&&A[i]<A[i+1])
	     {
	     	P[iP++]=A[i];
	     	x--;
	    }
	xuat(P,iP);  //phai xuat nguoc lai
}
void nhapMang(double A[],int &n)
{
	cin>>n;
	for(int i=1;i<=n;i++)
	   cin>>A[i];
}
void xuat(double X[],int n)
{
	for(int i=0;i<n;i++)
	   cout<<X[i]<<" ";
}


