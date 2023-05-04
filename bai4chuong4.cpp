#include<iostream>
#define SIZE 100
int binarySearch(int A[],int l,int r,int x);
void nhap(int A[],int &n);
int main()
{
	int A[100];
	int n;
	nhap(A,n);
	int x;
	std::cout<<"Nhap phan tu can tim kiem";
    std::cin>>x;
	int kq=binarySearch(A,0,n-1,x);
	std::cout<<kq;
}
void nhap(int A[],int &n)
{
	std::cin>>n;
	for(int i=0;i<n;i++)
	std::cin>>A[i];
}
int binarySearch(int A[],int l,int r,int x)
{
	int mid=(l+r)/2;
	if(A[mid]==x)
	return mid;
	if(A[mid]>x)
	return binarySearch(A,l,mid-1,x);
	return binarySearch(A,mid+1,r,x);
}
