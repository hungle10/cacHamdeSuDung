#include<iostream>
using namespace std;
void nhapMang(int A[], int& n);
void themGiaTriVaoMang(int A[], int& n, int vitri, int x);
void suaGiaTriMang(int A[], int vitrisua, int giatrisua);
void xoaMang(int A[], int& n, int vitrixoa);
int viTriTim(int A[], int n, int x);
void xuat(int A[], int n);
void suaGiaTriMang(int A[], int vitrisua, int giatrisua);
void xoaMang(int A[], int& n, int vitrixoa);
int main()
{
    int A[1000];
    int vitri, x, n;
    int vitrisua, giatrisua;
    int vitrixoa;
    int giaTritim;
    nhapMang(A, n);
    cin >> vitri >> x;
    cin >> vitrisua >> giatrisua;
    cin >> vitrixoa;
    cin >> giaTritim;
    themGiaTriVaoMang(A, n, vitri, x);
    xuat(A, n);
    suaGiaTriMang(A, vitrisua, giatrisua);
    xuat(A, n);
    xoaMang(A, n, vitrixoa);
    xuat(A, n);
    int kq = viTriTim(A, n,giaTritim);
    cout << kq;
}
void nhapMang(int A[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
}
void themGiaTriVaoMang(int A[], int& n, int vitri, int x)
{
    for (int i = n - 1; i >= vitri; i++)
        A[i + 1] = A[i];
    A[vitri] = x;
    n++;
}
void suaGiaTriMang(int A[], int vitrisua, int giatrisua)
{
    A[vitrisua] = giatrisua;
}
void xoaMang(int A[], int& n, int vitrixoa)
{
    for (int i = vitrixoa; i < n; i++)
        A[i] = A[i + 1];
    n--;
}
int viTriTim(int A[], int n, int x)
{
     A[n] = x;
     int i = 0;
    while (A[i] != x)
        i++;
    if (i == n)
        return -1;
    return 1;
}
void xuat(int A[], int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i]<<" ";
    cout << endl;
}
