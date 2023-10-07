#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	int c[500];
	int m;
	Nhap(c, m);
	cout << "\nMang da nhap la: ";
	Xuat(c, m);
	cout << "\nCac gia tri chi xuat hien 1 mot trong hai mang la: ";
    LietKe(b, k, c, m);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
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
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n, int aa[], int nn)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(aa, nn, a[i]) == 0 && flag)
			cout << a[i];
	}
	for (int i = 0; i <= nn; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (aa[j] == aa[i])
				flag = 0;
		if (TanSuat(a, n, aa[i]) == 0 && flag)
			cout << setw(10) << aa[i];
	}
}