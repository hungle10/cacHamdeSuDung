#include <iostream>
#include <iostream>
using namespace std;
void timSoThoaManDK (int n);
int main()
{
    int n;
    cin >> n;
    timSoThoaManDK (n);
    return 0;
}
void timSoThoaManDK (int n)
{
	int t = n/2;
    if (n == 2*t + 1)
    	cout << t+1 << " " << t;
    else if (n % 4 == 0)
    {
    	t = (n+4)/4;
    	cout << t << " "<<t-2;	     
	}
    else 
    	cout <<-1; 
}
