#include <iostream>
#include <iomanip>

using namespace std;

int DemXuatHien(int[], int, int[], int);

int main()
{
	int a[500];
	int b[500];
	int n;
	cout << "Nhap so phan tu n cua mang a: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	int m;
	cout << "Nhap so phan tu m cua mang b: ";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> b[i];
	}
	cout << "Dem: " << DemXuatHien(a, n, b, m);
	return 0;
}
int DemXuatHien(int a[], int n, int b[], int m)
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