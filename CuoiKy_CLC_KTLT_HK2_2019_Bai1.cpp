//S(n)=1-(1+2)+(1+2+3)-...+((-1)^(n+1))*(1+2+3+..+n)
#include<iostream>
#include<math.h>
using namespace std;
int n;
long long xuLy();
int main()
{
    cin>>n;
    long long kq=xuLy();
    cout<<kq;
}
long long xuLy()
{
    long long S=1;
    long long M=1;
    long long i=2;
    while(i<=n)
    {
        M=M+i;
        S=S+pow(-1,i+1)*M;
        i++;
    }
    return S;
}

