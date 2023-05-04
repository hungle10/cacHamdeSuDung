#include<iostream>
#include<string.h>
void xuat(char A[]);
int main()
{
	char A[10000];
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	int cnt4 = 0;
	std::cin.getline(A,10000);
	for (int i = 0; i < strlen(A); i++)
	{
		if (A[i] >= 'a' && A[i] <= 'z')
			cnt1++;
		else if (A[i] >= 'A' && A[i] <= 'Z')
			cnt2++;
		else if (A[i] >= '0' && A[i] <= '9')
			cnt3++;
		else
			{
			cnt4++;
		   }
	}
	std::cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4;
}

