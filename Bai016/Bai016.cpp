#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int y;
	cout << "Nhap y: ";
	cin >> y;
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "\nCac gia tri chan trong mang mot chieu thuoc doan XY la: ";
	LietKe(b, k, x, y);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n-1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n -1; i++)
		cout << setw(10) << a[i];
}

void LietKe(int a[], int n, int xx, int yy)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= xx && a[i] <= yy)
			if (a[i] % 2 == 0)
				cout << setw(10) << a[i];
}