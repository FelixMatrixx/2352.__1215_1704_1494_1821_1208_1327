#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void XayDung(float[], int, float[], int&);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	float b[500];
	int m;
	XayDung(a, n, b, m);
	Xuat(b, m);
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
void XayDung(float a[], int n, float b[], int& m)
{
	m = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
		{
			cout << "Truoc: " << m;
			b[m++] = a[i];
			cout << "Sau: " << m;
			cout << "\n";
		}
}
void Xuat(float a[], int n)
{
	cout << "Cac phan tu trong mang b: ";
	for (int i = 0; i <= n - 1; i++)
		cout << a[i] << setw(8);
}