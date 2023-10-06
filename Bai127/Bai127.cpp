#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
int ktCSC(float[], int);
int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	if (ktCSC(a, n) == 1)
		cout << "La csc";
	else
		cout << "Ko la csc";
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
int ktCSC(float a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n; i++)
		if (a[i] - a[i - 1] != a[0] - a[1])
			flag = 0;
	return flag;
}
