#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void HoanVi(float&, float&);
void DuongTang(float[], int);
void AmGiam(float[], int);
void DuongTangAmGiam(float[], int);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	DuongTangAmGiam(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void DuongTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}
void AmGiam(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				HoanVi(a[i], a[j]);
}
void DuongTangAmGiam(float a[], int n)
{
	DuongTang(a, n);
	AmGiam(a, n);
}
void Xuat(float a[], int n)
{
	cout << "Cac phan tu trong mang: ";
	for (int i = 0; i <= n - 1; i++)
		cout << a[i] << setw(8);
}