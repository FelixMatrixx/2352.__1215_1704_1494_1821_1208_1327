#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float [], int&, float &);
void ThemBaoToan(float [], int& , float x);
void Xuat(float[], int);
int main()
{
	float a[100];
	int k;
	float x;
	Nhap(a, k, x);
	ThemBaoToan(a, k, x);
	Xuat(a, k);
}
void Nhap(float a[], int& n, float &x)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
void ThemBaoToan(float a[], int &n, float x)
{
	int i = n-1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n; i++)
		cout << a[i] << setw(7);
}
