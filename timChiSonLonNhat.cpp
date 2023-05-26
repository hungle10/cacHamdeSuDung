//F[0]=2
//F[1]=4
//F[2]=6
//F[n]=2*F[n-3]+4*F[n-2]+6F[n-1](n>2);
//tim chi so n lon nhat thoa Fn<m
#include<iostream>
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
