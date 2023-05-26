//LOANG MA TRAN 
//DE BAI HOI CO THE LOANG TU DIEM X1,Y1 CHO TRUOC TOI X2,Y2 KHONG
//NEU DUOC THI XUAT RA VI TRI 

#include<iostream>
using namespace std;
int x1,y1,x2,y2;
int check();

int main()
{
    int S[8][8];
    cin>>x1>>y1>>x2>>y2;
    int kq=check();
    cout<<kq;
}

int check()
{
	int vitri;
	int X[8]={-2,-2,-1,1,2,2,1,-1};
	int Y[8]={1,-1,-2,-2,-1,1,2,2};
	for(int k=0;k<8;k++)
	   if(x2==x1+X[k]&&y2==y1+Y[k])
	   {
	    vitri=k+1;
	    return vitri;
	   }
	return 0;
}
