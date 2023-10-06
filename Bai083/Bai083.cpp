#include <iostream>
#include <iomanip>

using namespace std;

int DauTien(int[], int, int, int);

int main()
{
	int a[500];
	int n;
	int x, y;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "Doan: [x; y]" << "\nNhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Gia tri dau tien: " << DauTien(a, n, x, y);
	return 0;
}
int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}