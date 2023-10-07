#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Mang a: ";
	Xuat(a, k);
	int b[500];
	int m;
	Nhap(b, m);
	cout << "\nMang b: ";
	Xuat(b, m);
	cout << "\nCac phan tu trong mang a co nam trong mang b hay khong: "<< ktThuoc(a, k, b, m);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int ktThuoc(int aa[], int nn, int bb[], int mm)
{
	int flag = 1;
	for (int i = 0; i < nn; i++)
		if (TanSuat(bb, mm, aa[i]) == 0)
			flag = 0;
	return flag;
}
