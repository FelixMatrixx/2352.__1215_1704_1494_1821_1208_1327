#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
void xaydung(int[], int[], int);
int main()
{
	int n;
	int a[100];
	int b[100];
	Nhap(a, n);
	xaydung(a, b, n);
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
void xaydung(int a[], int b[], int n)
{
	int index = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[dem] = a[i];
			dem++;
		}
	}
	for (int i = 0; i < dem; i++)
	{
		cout << setw(6) << b[i] ;
	}
}