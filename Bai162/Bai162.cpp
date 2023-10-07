#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
void Xoavitri(int[], int&, int);
void Xoasochan(int[], int&);
void Xuat(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xoasochan(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}
void Xoavitri(int a[], int& n, int k)// k la vi tri trong mang cang xoa
{
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n = n - 1;
}
void Xoasochan(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] % 2 == 0)
			Xoavitri(a, n, i);
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}