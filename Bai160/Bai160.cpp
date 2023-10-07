#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float b[500];
	int k;
	int index;
	cout << "Nhap vi tri k: ";
	cin >> index;
	Nhap(b, k);
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	cout << "\nMang moi duoc tao la: ";
	XoaViTri(b, k, index);
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