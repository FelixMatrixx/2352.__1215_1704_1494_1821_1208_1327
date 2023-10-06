#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void HoanVi(float&, float&);
void SapTang(float[], int);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	SapTang(a, n);
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
void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}
void SapTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
void Xuat(float a[], int n)
{
	cout << "Mang tang dan: ";
	for (int i = 0; i < n; i++)
		cout << setw(3) << a[i];
}
