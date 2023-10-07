#include <iostream>
using namespace std;
void Nhap(float[], int&);
float GiaTriDuongDauTien(float [], int );
float DuongNhoNhat(float a[], int n);
void Xuat(float);

int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	Xuat(DuongNhoNhat(a, k));
	return 0;

}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
float GiaTriDuongDauTien(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return a[i];
	return 0;
}
float DuongNhoNhat(float a[], int n)
{
	float lc = GiaTriDuongDauTien(a, n);
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}
void Xuat(float lc)
{
	cout << "Gia tri duong nho nhat: " << lc;
}



