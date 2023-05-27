//#include<conio.h>
#include<stdio.h>

typedef struct
{
    long s,f;
}T;

void qs(T a[], long left,long right)
{
long i,j;
T x,y;
i=left; j=right;
x= a[(left+right)/2];
do
{
while(x.f>a[i].f && i<right) i++;
while(a[j].f>x.f && j>left) j--;
if(i<=j)
{
y=a[i];a[i]=a[j];a[j]=y;
i++;j--;
}
}
while (i<=j);
if (left<j) qs(a,left,j);
if (i<right) qs(a,i,right);
}



int main()
{
    long n;
    scanf("%ld",&n);
    T *S=new T[n+5];
    for(long i=1;i<=n;i++) scanf("%ld%ld",&S[i].s,&S[i].f);
    qs(S,1l,n);
    long x=S[1].s;
    long d=0;
    for(long i=1;i<=n;i++)
    if(x<=S[i].s)
    {
        d++;
        x=S[i].f;
    }
    printf("%ld",d);

   // getch();
}



