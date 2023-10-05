#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void LietKe(int[], int);
int main()
{
	int b[500];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	LietKe(b, n);
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
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
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
void LietKe(int a[], int n)
{
	cout << "\nVi tri cac so nguyen to trong mang la: ";
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			cout << setw(8) << i;
}
