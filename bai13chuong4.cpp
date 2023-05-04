#include<iostream>
using namespace std;
int B[100]={0};
int A[100];
int n;
void hoanVi(int k);
void xuat();
int main()
{
    cin>>n;
	hoanVi(0);
	return 0;
}
void hoanVi(int k)
{
   if(k==n)
	  xuat();
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
	    cout<<A[i];
	cout<<endl;
}
