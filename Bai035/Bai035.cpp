#include <iostream>
#include <iomanip>

using namespace std;

int HangChuc(int);
int TongGiaTri(int[], int);

int main()
{
	int a[500];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "Tong cac so co chu so hang chuc la 5 la: " << TongGiaTri(a, n);
	return 0;
}
int HangChuc(int n)
{
	int t = abs(n);
	return (t / 10) % 10;
}
int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (HangChuc(a[i]) == 5)
		s += a[i];
	}
	return s;
}