#include<iostream>
using namespace std;
void nhap(char &kyTu);
char chuyenchu( char kyTu);
void xuat(char kq);
int main()
{
	char kyTu;
	nhap(kyTu);
	char kq=chuyenchu(kyTu);
	xuat(kq);
	return 0;
}
void nhap (char &kyTu)
{cout<<"Moi nhap chu cai";
cin>>kyTu;
}
char chuyenchu(char kyTu)
{

 if ((kyTu>=65&&kyTu<=90))
	 {
	    kyTu+=32;
}
else if((kyTu>=97&&kyTu<=122))
{
	 	kyTu-=32;
	 
}
}

void xuat(char kq)
{
cout<<kq;
}
