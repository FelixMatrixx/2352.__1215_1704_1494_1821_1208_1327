#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucTieu(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	cout << "\nTong cac gia tri nho hon cac gia tri xung quanh cua mang la: " << TongCucTieu(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

float TongCucTieu(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s += a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s += a[i];
	if (a[n - 1] < a[n - 2])
		s += a[n - 1];
	return s;
}