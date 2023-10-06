#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void XoaViTri(int[], int&, int);
bool ktChinhPhuong(int);
void XoaChinhPhuong(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	XoaChinhPhuong(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] == a[i + 1];
	n--;
}
bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
void XoaChinhPhuong(int a[], int& n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktChinhPhuong(a[i]))
			XoaViTri(a, n, i);
}
void Xuat(int a[], int n)
{
	cout << "Cac phan tu trong mang sau xu ly: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}