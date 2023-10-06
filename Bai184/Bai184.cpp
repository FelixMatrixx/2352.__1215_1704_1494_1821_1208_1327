#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemCon(int[], int, int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Mang da nhap la: ";
	Xuat(a, k);
	int b[500];
	int m;
	Nhap(b, m);
	cout << "\nMang da nhap la: ";
	Xuat(b, m);
	cout << "So lan mang so nguyen a xuat hien trong mang b la: " << DemCon(a, k, b, m);
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

int DemCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}