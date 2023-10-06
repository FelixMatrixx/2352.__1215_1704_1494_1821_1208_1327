#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void XuatCon(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	XuatCon(a, n);
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
void XuatCon(int a[], int n)
{
	cout << "Cac phan tu trong mang sau xu ly: ";
	for (int l = 1; l <= n; l++)
	{
		cout << "\nMang con co " << l << " phan tu: ";
		for (int vt = 0; vt <= n - l; vt++)
			{
			for (int i = 0; i < l; i++)
				cout << setw(8) << a[vt + i];
			cout << " | ";
			}
	}
}