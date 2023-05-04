#include<iostream>
long long tinhGiaiThua(int n);
int main()
{
   int n;
   std::cin>>n;
   long long kq=tinhGiaiThua(n);
   std::cout<<kq;
}
long long tinhGiaiThua(int n)
{
   if(n==0||n==1)
   return 1;
   return n*tinhGiaiThua(n-1);
 }	
