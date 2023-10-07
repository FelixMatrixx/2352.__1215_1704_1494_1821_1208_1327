#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
void Xoavitri(float[], int&, int);
int Tansuat(float[], int , float);
void Xoaphantu(float[], int&);
void Xoatrung(float[], int&, float);
void Xuat(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Xoaphantu(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}
void Xoavitri(float a[], int& n, int k) // k la vi tri bat dau xoa
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}
int Tansuat(float a[], int n , float x)
{
	int dem = 0; 
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}
void Xoatrung(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == x)
			Xoavitri(a, n, i);
	}
}
void Xoaphantu(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (Tansuat(a, n, a[i]) > 1)
			Xoatrung(a, n, a[i]);
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}