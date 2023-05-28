//QUY HOACH DONG MANG CON "LIEN TIEP" CO TONG LON NHAT
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
void nhapMang(double A[],int &n);
int QHD(double A[],int n);
int main()
{
	double A[1000];
	int n;
    nhapMang(A,n);
    float sum=QHD(A,n);
    cout << setprecision(2) << fixed << sum;
}
void nhapMang(double A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>A[i];
}
int QHD(double A[],int n)
{
	int max_sum = 0;
    int cur_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cur_sum += A[i];
        max_sum = max(max_sum, cur_sum);
        
        if (cur_sum < 0) {
            cur_sum = 0;
        }
    }
    
    return max_sum;

}
	   	     

	
