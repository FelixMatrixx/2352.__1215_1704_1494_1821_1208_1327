#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool NhoNhat(float[], int);
void LietKe(float[], int);
int main()
{
	float b[500];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	LietKe(b, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}
bool NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < lc)
			lc = a[i];
	}
	return lc;
}
void LietKe(float a[], int n)
{
	float lc = NhoNhat(a, n);
	cout << "\nVi tri cua gia tri nho nhat trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			cout << setw(8) << i;
}
