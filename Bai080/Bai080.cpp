#include <iostream>
using namespace std;
void Nhap(float[], int& );
float AmDauTien(float[], int);
void Xuat(float);
int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	Xuat(AmDauTien(a, k));
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
float AmDauTien(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}
void Xuat(float n)
{
	cout << "Gia tri am dau tien: " << n;
}
