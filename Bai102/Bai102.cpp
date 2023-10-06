#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
bool Ktrahoanthien(int);
int Hoanthiendau(int[], int);
int Timso(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << Timso(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}
}
bool Ktrahoanthien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	return false;
}
int Hoanthiendau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Ktrahoanthien(a[i]))
			return a[i];
	}
	return -1;
}
int Timso(int a[], int n)
{
	int min = Hoanthiendau(a, n);
	for (int i = 0; i < n; i++)
	{
		if (Ktrahoanthien(a[i]) && a[i] < min)
			min = a[i];

	}
	return min;

}