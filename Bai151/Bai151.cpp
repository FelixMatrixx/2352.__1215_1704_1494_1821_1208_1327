#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void HoanVi(int&, int&);
void DuaVeDau(int[], int);
void Xuat(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	DuaVeDau(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void DuaVeDau(int a[], int n)
{
	int b[100];
	int k = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 3 == 0)
			HoanVi(a[i], a[k++]);
}
void Xuat(int a[], int n)
{
	cout << "Mang duoc nguyen hoa: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}