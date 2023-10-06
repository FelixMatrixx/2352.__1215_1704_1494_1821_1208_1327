#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);
int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int dem = DemNguyenTo(a, n);
	cout << "So luong so nguyen to trong mang: " << dem;
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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			dem++;
	return dem;
}
