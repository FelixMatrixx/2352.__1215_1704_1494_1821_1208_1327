#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float&, int&);
void ThemViTri(float[], int&, float, int);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	float x;
	int k;
	Nhap(a, n, x, k);
	ThemViTri(a, n, x, k);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n, float& x, int& k)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
	cout << "\nNhap gia tri phan tu muon them vao: ";
	cin >> x;
	cout << "\nNhap vi tri muon them vao: ";
	cin >> k;
}
void ThemViTri(float a[], int& n, float x, int k)
{
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
}
void Xuat(float a[], int n)
{
	cout << "Cac phan tu trong mang sau xu ly: ";
	for (int i = 0; i <= n - 1; i++)
		cout << a[i] << setw(8);
}