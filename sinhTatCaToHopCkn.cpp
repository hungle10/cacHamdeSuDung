#include<iostream>
using namespace std;
void khoiTao(int A[],int k);
void xuat(int A[],int k);
void latNguocMang(int A[],int x,int y);
void swap(int &a,int &b);
int main()
{
	int A[100];
	int n,k;
	cin>>n>>k;
	khoiTao(A,k);
	xuat(A,k);
	int i=k-1;
	do{
	   while(A[i]<n-k+i)
	      {A[i]++;
	      for(int j=i+1;j<k;j++)
	          A[j]=A[j-1]+1;
	    xuat(A,k);
	    i=k-1;
	       }
	    i--;
    }while(i>=0);
	
}
void khoiTao(int A[],int k)
{
	for(int i=0;i<k;i++)
	   A[i]=i;
}
void xuat(int A[],int k)
{
	for(int i=0;i<k;i++)
	   cout<<A[i]<<" ";
    cout<<endl;
}
void latNguocMang(int A[],int x,int y)
{
	while(x<y)
	{
		swap(A[x],A[y]);
		x++;
		y--;
	}
}
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
