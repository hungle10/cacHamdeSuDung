//LIET KE TAT CA NHI PHAN CO DO DAI N (DUNG DE QUY)
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
	for(int i=1;i<=n;i++)
	   cout<<X[i];
	cout<<endl;
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

