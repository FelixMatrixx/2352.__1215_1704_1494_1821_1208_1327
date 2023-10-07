#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
void Hoanvi(int&, int&);
void Sapgiam(int[], int);
void Xuat(int[], int);
int main() {
	int n;
	int a[100];
	Nhap(a, n);
	Sapgiam(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int  a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}
void Hoanvi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Sapgiam(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
				Hoanvi(a[i], a[j]);
		}
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}