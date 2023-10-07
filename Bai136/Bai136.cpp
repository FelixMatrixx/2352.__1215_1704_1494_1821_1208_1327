#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[500];
	int k;
	int b[500];
	int m;
	Nhap(a,k);
	cout << "Mang ban dau: ";
	Xuat(a,k);
	cout << "\nMang moi duoc tao: ";
	XayDung(a, k,b,m);
	Xuat(b, m);
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

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else
			if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
				b[k++] = 0;
		b[k++] = a[i];
	}
}