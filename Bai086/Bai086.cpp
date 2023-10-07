#include <iostream>
using namespace std;
void Nhap(float [], int&);
float SoDuongCuoiCung(float[], int);
void Xuat(float);
int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	Xuat(SoDuongCuoiCung(a, k));
}
void Nhap(float a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
float SoDuongCuoiCung(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] > 0)
			return a[i];
	return 0;
}
void Xuat(float n)
{
	cout << "So duong cuoi cung la: " << n;
}