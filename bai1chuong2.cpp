#include<iostream>
using namespace std;
void nhapMangvaSoCanTim(int A[],int &n,int &x);
int timViTri(int A[],int n,int x);
int main()
{
	int A[1000];
	int n;
	int x;
	nhapMangvaSoCanTim(A,n,x);
    int kq=timViTri(A,n,x);
    cout<<kq;
}
void nhapMangvaSoCanTim(int A[],int &n,int &x)
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
int timViTri(int A[],int n,int x)
{
    int i=0;
    A[n]=x;
    while(A[i]!=x)
    {
        i++;
    }
    if(i==n)
    return -1;
    return i;
}
