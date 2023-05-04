#include<iostream>
void nhap(int A[],int &n);
void xuLy(int A[],int B[],int n,int &nB);
void timPhanTu(int A[],int B[],int nB);
int main()
{
	int n,nB;
	int A[1000];
	int B[1000]={0};
	nhap(A,n);
	xuLy(A,B,n,nB);
	timPhanTu(A,B,nB);
	return 0;
}
void nhap(int A[],int &n)
{
	std::cin>>n;
	for(int i=0;i<n;i++)
	   std::cin>>A[i];
}
void xuLy(int A[],int B[],int n,int &nB)
{
	nB=0;
	for(int i=0;i<n;i++)
	  for(int j=i;j<n;j++)
	    if(A[i]==A[j])
	        {
			B[i]=B[i]+1;
			nB++;
			}
}
void timPhanTu(int A[],int B[],int nB)
{
	int max=B[0];
	int index=0;
	for(int i=0;i<nB;i++)
           if(B[i]>max)
             {
                 max=B[i];
             }
    int min=10000;
    for(int i=0;i<nB;i++)
       if(B[i]==max)
          if(A[i]<min)
            {min=A[i];
            index=i;
            }
	std::cout<<A[index];
}
