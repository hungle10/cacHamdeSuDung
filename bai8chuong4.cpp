#include<iostream>
void nhapMang(int A[],int &n);
int timSoNguyenToMin(int A[],int n);
bool checkSoNguyenTo(int x);
int main()
{
	int A[100];
	int n;
   nhapMang(A,n);
   int kq=timSoNguyenToMin(A,n);
   std::cout<<kq;
}
void nhapMang(int A[],int &n)
{
	std::cin>>n;
	for(int i=0;i<n;i++)
	   std::cin>>A[i];
}
int timSoNguyenToMin(int A[],int n)
{
	int min=1000;
	for(int i=0;i<n;i++)
	   if(checkSoNguyenTo(A[i])&&A[i]<min)
	     min=A[i];
	return min;
}
bool checkSoNguyenTo(int x)
{
	int dem=0;
	for(int i=1;i<=x;i++)
     	if(x%i==0)
	       dem++;
	if(dem==2)
	return true;
	return false;
}
