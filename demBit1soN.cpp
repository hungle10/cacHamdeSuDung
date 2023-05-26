#include<iostream>
using namespace std;
int countSetBits(unsigned int n);
int layBit(int n,int k);
// kiem tra so nguyen n co bao nhieu bit duoc bieu dien 
// o dang nhi phan 32 BIT
int main()
{
    unsigned int n;
    cin>>n;
    int kq=countSetBits(n);
    cout<<kq;
}
int countSetBits(unsigned int n)
{
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (layBit(n,i)==1) {
            count++;
        }
    }
    return count;
}
int layBit(int n,int k)
{
    return (n>>k)&0x1;
}
