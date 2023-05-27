//mot diem goi la THOA DUOC neu diem do lech cua diem do so voi trung 
//binh cong cac diem lan can nho hon K ( K nhap vao)
// input 3 4 2(k)
// 4 5 6 7 
// 9 8 3 2 
// 11 12 10 1
//vd tbc lan can so 5 (4+9+8+3+6)/5=6
//vd tbc lan can so 11 (9+8+12)/3=9.667

#include<iostream>
#include<math.h>
using namespace std;
int m,n;
void nhapMang(int A[][100]);
int demDiem(int A[][100],int k);
bool trungBinhCong(int A[][100],int i,int j,int k);
int main()
{
	int A[100][100];
    int k;
	cin>>m>>n>>k;
	nhapMang(A);
	int kq=demDiem(A,k);
	cout<<kq;
}
void nhapMang(int A[][100])
{
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      cin>>A[i][j];
}
int demDiem(int A[][100],int k)
{
   int cnt=0;
   for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
         if(trungBinhCong(A,i,j,k)==true)
             cnt++;
    return cnt;
}
bool trungBinhCong(int A[][100],int i,int j,int k)
{
	int X[8]={-1,0,1,1,1,0,-1,-1};
	int Y[8]={-1,-1,-1,0,1,1,1,0};
	double kq=0;
	int cnt=0;
	for(int h=0;h<8;h++)
     {
       if(i+X[h]>=0&&j+Y[h]>=0&&i+X[h]<m&&j+Y[h]<n)
	     {
		  kq=kq+A[i+X[h]][j+Y[h]];
	      cnt++;
	      }
	}
	double kq1=(double)kq/cnt;
	double chenhlech=fabs(kq1-A[i][j]);
	if(chenhlech<k)
	return true;
	return false;
}
