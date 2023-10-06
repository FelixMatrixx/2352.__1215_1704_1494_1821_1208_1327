#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void XoaViTri(float[], int&, int);
void XoaAm(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	XoaAm(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaAm(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0)
			XoaViTri(a, n, i);
}
void Xuat(float a[], int n)
{
	cout << "Mang xoa am: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}