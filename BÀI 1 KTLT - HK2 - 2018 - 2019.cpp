//F[0]=2,F[1]=4,F[2]=6,
//F[n]=2*F[n-3]+4*F[n-2]+6*F[n-1]
//tim n lon nhat thoa dieu kien F[n]<=m,m cho truoc
//CACH DUNG MANG(QHD) CHUONG TRINH CO THE BI LOI 

#include<iostream>
using namespace std;
void xuLy(int F[100000],int m,int &n);
int main()
{
	int F[100000]={0};
	int m,n;
	n=0;
	cin>>m;
	xuLy(F,m,n);
    cout<<n-2;
}
void xuLy(int F[100000],int m,int &n)
{
    F[-1]=INT_MIN;
	F[0]=2;
	F[1]=4;
	F[2]=6;
	while(F[n-1]<=m&&n<=2)
    {
        n++;
    }
	while(F[n-1]<=m&&n>2)
	   {
	   	F[n]=2*F[n-3]+4*F[n-2]+6*F[n-1];
        n++;
	   }
	
}

// CACH DUNG DE QUY 100/100 TEST
/*#include<iostream>
using namespace std;
int n;
int m;
int F(int n);
int main()
{
    n=0;
    cin>>m;
    while(true)
       {
       	int kq=F(n);
        if(kq>m)
          break;
        else
          n++;
       }
    cout<<n-1;
}
int F(int n)
{
    if(n==0)
    return 2;
    if(n==1)
    return 4;
    if(n==2)
    return 6;
    return 2*F(n-3)+4*F(n-2)+6*F(n-1);
}
*/
