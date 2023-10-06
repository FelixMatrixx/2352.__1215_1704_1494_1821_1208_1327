#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&, int[], int&);
void SapTang(int[], int);
void HoanVi(int&, int&);
int ktHoanVi(int[], int, int[], int);

int main()
{
	int a[500];
	int b[500];
	int n, m;
	Nhap(a, n, b, m);
	cout << ktHoanVi(a, n, b, m);
	return 0;
}
void Nhap(int a[], int& n, int b[], int& m)
{
	cout << "Nhap so phan tu n cua mang a: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "Nhap so phan tu m cua mang b: ";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> b[i];
	}
}
void SapTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
int ktHoanVi(int a[], int n, int b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}
void HoanVi(int& x, int& y)
{
	float temp = x;
	x = y;
	y = temp;
}