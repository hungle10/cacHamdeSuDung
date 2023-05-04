#include<iostream>
using namespace std;
void xuat(int X[],int n);
void deQuy(int i);
bool kiemTra();
int n;
int X[100];
int main()
{

	cin>>n;
	deQuy(1);
}
void xuat(int X[])
{
	if(kiemTra()==true)
	{for(int i=1;i<=n;i++)
	   cout<<X[i];
	cout<<endl;
    }
}
void deQuy(int i)
{
	for(int j=0;j<=1;j++)
	{
	   X[i]=j;
	if(i==n)
	   xuat(X);
	else 
	   deQuy(i+1);
	}
}
bool kiemTra()
{
	for(int i=0;i<n;i++)
	   if(X[i]==1&&X[i+1]==1)
	      return false;
	return true;
}

