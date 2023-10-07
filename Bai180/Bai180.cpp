#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
bool Mangtang(int[], int, int ,int);
int Dem(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "So mang con thoa yeu cau la " << Dem(a, n);
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
bool Mangtang(int a[], int n,int vt, int l)
{
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			return false;
	return true;
}
int Dem(int a[], int n)
{
	int dem = 0;
	for (int l = 2; l <= n; l++)
	{
		for (int i = 0; i <= n-l; i++)
		{
			if (Mangtang(a, n, i, l))
				dem++;

		}
	}
	return dem;
}