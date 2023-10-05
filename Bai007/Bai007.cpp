#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int [], int&);
void Xuat(int [], int);
void LietKe(int [], int);
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
void LietKe(int a[], int n)
{
	cout << "\nCac so duong trong mang la:";
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			cout << setw(8) << a[i];
}
