#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrungX(float[], int&, float);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	cout << "\nMang moi duoc tao la: ";
	XoaTrungX(b, k, x);
	Xuat(b, k);
	return 0;
}

void Nhap(float  a[], int& n)
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

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrungX(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}