#include <iostream>
#include <iomanip>;
using namespace std;
void Nhap(int[], int&);
bool ktSoNguyenTo(int);
int SoLuongNguyenTo(int a[], int n);
void XoaViTri(int[], int &, int);
void XoaNguyenTo(int[], int&);
void Xuat(int[], int n);
int main()
{
	int a[50];
	int k;
	Nhap(a, k);;
	XoaNguyenTo(a, k);
	Xuat(a, k);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
bool ktSoNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int SoLuongNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktSoNguyenTo(a[i]))
			dem++;;
	return dem;
}
void XoaViTri(int a[], int &n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaNguyenTo(int a[], int&n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktSoNguyenTo(a[i]))
			XoaViTri(a, n, i);
}
void Xuat(int a[], int n)
{
	int sl = SoLuongNguyenTo(a, n);
	for (int i = 0; i < n - sl; i++)
		cout << a[i] << setw(7);
}