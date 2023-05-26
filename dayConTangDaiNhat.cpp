#include<iostream>
#include<math.h>
using namespace std;
// day con so nguyen to tang dai nhat 
// co the su dung lam bai kiem tra day con tang dai nhat
int A[1000];
int l[1000];
void nhapMang(int A[],int &n);
bool checkSoNguyenTo(int x);
int main()
{
	int n;
	nhapMang(A,n);
	if(checkSoNguyenTo(A[0])==true)
	l[0]=1;
	else 
	l[0]=0;
	int lmax;
	for(int i=1;i<n;i++)
	   {
	   	 lmax=0;
	   	 for(int j=0;j<i;j++)
	   	     {
	   	     	if(checkSoNguyenTo(A[i])&&checkSoNguyenTo(A[j])&&A[i]>A[j])
	   	     	     if(l[j]>lmax)
	   	     	        lmax=l[j];
	   	     }
		  l[i]=lmax+1;
		}
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	   if(l[i]>max)
	     max=l[i];
    cout<<max;
}
void nhapMang(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>A[i];
}
bool checkSoNguyenTo(int x)
{
	if(x<2)
	return false;
    for(int i=2;i<=sqrt((float)x);i++)
      {
      	if(x%i==0)
      	   return false;
      }
    return true;
}
