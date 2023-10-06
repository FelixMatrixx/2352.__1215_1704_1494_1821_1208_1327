#include <iostream>
#include <iomanip>

using namespace std;
void Nhap(int[], int&);
bool Ktchinhphuong(int);
int Tongchinhphuong (int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "Tong la " << Tongchinhphuong(a, n);



	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}
}
bool Ktchinhphuong(int n)
{
	for (int i = 1; i*i <= n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}
int Tongchinhphuong(int a[], int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktchinhphuong(a[i]))
			Tong = Tong + a[i];
	}
	return Tong;
}