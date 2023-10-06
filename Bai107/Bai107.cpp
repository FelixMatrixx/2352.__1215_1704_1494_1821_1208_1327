#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
int TimGiaTri(int[], int);

int main()
{
	int a[500];
	int n, x;
	Nhap(a, n);
	cout << "Gia tri xuat hien nhieu nhat: " << TimGiaTri(a, n);
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
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
			lc = a[i];
	return lc;
}