#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float [], int&);
void Dichtrai(float [], int );
void Xuat(float  [] , int);
int main()
{
	float a[50];
	int k;
	Nhap(a, k);
	Dichtrai(a, k);
	Xuat(a, k);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
void Dichtrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = a[0];
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << a[i] << setw(8);
}