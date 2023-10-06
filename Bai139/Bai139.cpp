#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void HoanVi(int&, int&);
void ViTriLeTang(int[], int);
void Xuat(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	ViTriLeTang(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void ViTriLeTang(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
			for (int j = i + 1; j <= n - 1; j++)
				if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
					HoanVi(a[i], a[j]);
}
void Xuat(int a[], int n)
{
	cout << "Cac phan tu trong mang a: ";
	for (int i = 0; i <= n - 1; i++)
		cout << a[i] << setw(8);
}